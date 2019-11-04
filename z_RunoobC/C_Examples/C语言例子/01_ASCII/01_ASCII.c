/*
*	ASCII定义了128个字符
*	(1) 0-31、127是控制字符
*	(2) 空白字符: 空格(32)、制表符、垂直制表符、换行、回车
*	(3) 可显示字符: a-z, A-Z, 0-9, ~, !, @, %, ^, &, #, $, *, (, ), -, +, {, },[,],',",<,>,?,/,\,|,_,:,;,.,、。
*/

#include <stdio.h>
#define MAX_ASCII 127

int main()
{
	char enter;
	static int temp;
	char num;
	while (1)
	{
		printf("-----------------------------------------\n");
		printf("-|               Start                 |- \n");
		printf("-|ASCII Change into Character, press: 1|-\n");
		printf("-|Character Change into ASCII, press: 2|-\n");
		printf("-|            End press: 0             |-\n");
		printf("-----------------------------------------\n");
		scanf("%d", &temp);
	
		if (temp == 1)
		{
			printf("Please enter a number below %d\n", MAX_ASCII);
			scanf("%d", &num);
			printf("ASCII is %d, corresponding character is %c \n", num, num);
			continue;
		}
		else if (temp == 2)
		{
			printf("Please enter a character\n");
			scanf("%c", &enter);
			scanf("%c", &num);
			printf("Character is %c, corresponding ASCII is %d \n", num, num);
			continue;
		}
		else
		{
			printf("END.\n"); 
	 		break;
		}
	}
		return 0;
}
