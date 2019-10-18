#include<stdio.h>
#include<dos.h>

#define MAXLINE 256

int main()
{
	char *filename[32];
	FILE *fp;
	char ch,flag;
	unsigned long n,m,k=0;
	clrscr();
	printf("Please input the object file:\n");
	gets(filename);
	printf("...........");
	if((fp=fopen(filename,"w+b"))==0)
	{
		printf("Cannot open the file %s\n",filename);
		exit(0);
	}
	for(m=0;m<40960;m+=4096)
	{
		for(n=0;n<65536;n++)
		{
			ch=peekb(m,n);
			
			if((ch<32&&ch!=13)||(ch>126&&ch<160))
			{
				flag=0;
				continue;
			}
			
			if(ch>160&&flag==0)
			{
				flag=ch;
				continue;
			}
			k++;
			if(ch<160)
			{
				fputc(ch,fp);
				if(ch==13)
				{
					fputc(10,fp);
					k=0;
				}
			}
			else
			{
				fputc(flag,fp);
				fputc(ch,fp);
				k++;
				flag=0;
			}
			
			if(k==MAXLINE-1)
			{
				fputc(13,fp);
				fputc(10,fp);
				k=0;
			}
		}
	}
	printf("\nRecover the text successfully!!\n");
	fclose(fp);
	printf("\nPlease input any key to quit..\n");
	getch();
	return 0;
}