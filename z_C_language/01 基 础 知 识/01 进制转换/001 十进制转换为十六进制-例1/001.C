#include <stdio.h>
main()											/*main()主函数*/
{
    int i;											/*定义一个变量i*/
    printf("please input decimalism number:\n");				/*双引号内普通字符原样输出并换行*/
    scanf("%d", &i);									/*scanf()函数以十进制形式获得i的值*/
    printf("the hex number is %x\n", i);						/*将i的值以十六进制形式输出*/
}
