#include <stdio.h>
#include <bios.h>
#include <fcntl.h>
#include <sys\types.h>
#include <sys\stat.h>

void info(void);  

int main(int argc,char * argv[])
{
  int result;
  char buffer[512];
  FILE *fp;
  if (argc == 1) info();
  if (* argv[1] == 's' || *argv[1] == 'S')		
  {
    result = biosdisk(2,0x80,0,0,1,1,buffer);   
	if (!result){								
		printf(" Read partition table successfully!\n");

		if (( fp = fopen("c:\\diskp.bak","wb+"))==NULL)
		{
			fprintf(stderr," Can't creat file:c:\\diskp.bak \n");
			exit(1);
		}
		fwrite(buffer,1,512,fp);
		fclose(fp);
		printf(" Partition table save successfully!\n");
		return 0;
	}
	else {
		fprintf(stderr," Fail to read partition table!");
		exit(1);
	}
  }
  if ( * argv[1] == 'r' || * argv[1] == 'R')
  {
	  if ((fp = fopen("c:\\diskp.bak","rb+"))==NULL)
	  {
		  fprintf(stderr," Can't open file!");
		  exit(1);
	  }
	  fread (buffer,1,512,fp);
	  result = biosdisk(3,0x80,0,0,1,1,buffer);
	  if (! result){
		  printf(" Partition table restore successfully!\n");
		  fclose(fp);
		  return 0;
	  }
	  else{
		  fprintf(stderr," Failt to restore partition table!");
		  fclose(fp);
		  exit(1);
	  }
  }
  printf("\n Press any key to quit...");
  getch();
  return 0;
}

void info(void)
{
	puts(" The correction method using this program is : program S or program R");
	puts("   S---save partition table to file diskp.bak in c disk");
	puts("   R---restore partion table from file diskp.bak in c disk");
	exit(0);
}

