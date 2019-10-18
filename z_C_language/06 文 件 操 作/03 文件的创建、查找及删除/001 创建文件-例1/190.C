#include<stdio.h>
#include<io.h>
main()
{
    int handle;
    char filename[50];										/*数组定义为字符类型*/
    printf("please input filename:\n");
    scanf("%s", filename);									/*输入要创建的文件所在路径及名称*/
    if ((handle = creatnew(filename, 0)) ==  - 1)
    {
        printf("\n Error! Cannot vreat!");						/*如果文件创建失败，输出双引号中内容*/
    }
    else
    {
        printf("\nthis file has created!");						/*如果文件创建成功，输出双引号中内容*/
        close(handle);
    }
}
