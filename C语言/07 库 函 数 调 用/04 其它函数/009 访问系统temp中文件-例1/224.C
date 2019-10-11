#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
   char * pathname,filename[30],ch;
   FILE *fp;
   pathname =getenv("TEMP");/*获取临时文件夹路径*/

	 printf("\nCurrent path is:%s\n",pathname);/*将临时文件夹路径输出*/
	 printf("press any key to open one file!");
	 getch();
	 strcat(pathname,"\\new.txt");/*连接文件名*/
	 strcpy(filename,pathname);/*将完整的文件路径名拷贝到filename中*/
	  if((fp=fopen(filename,"r"))!=NULL)
      {

         printf("\nThe name of the file is");
         printf("\n%s",filename);/*输出文件路径名*/
         printf("\nThe content of the file is");
         printf("\n");
         ch=fgetc(fp);
	 while(ch!=EOF)/*读取文件中的内容*/
	 {
		 printf("%c",ch);
		 ch=fgetc(fp);
	 }
	 fclose(fp);/*关闭文件*/

     }

      else
      printf("can not open!");/*若文件未打开输出提示信息*/
     }
