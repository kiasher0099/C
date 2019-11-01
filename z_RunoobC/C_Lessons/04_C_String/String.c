#include <stdio.h>
#include <string.h>

int main ()
{
	char str1 [12] = "Hello";
	char str2 [12] = "World";
	char str3 [12] ;
	int len;
	int compare;

	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);

	/* 复制 str1 到 str3 */
	strcpy(str3, str1);
	printf("strcpy(str3, str1) : ( %s, %s)\n", str3, str1);

	/* 连接 str1 和 str2 */
	strcat(str2, str1);
	printf("strcat(str2, str1) : ( %s, %s)\n", str2, str1);

	/* 比较 str1 和 str2 */
	compare = strcmp(str2, str2);
	printf("strcmp(str2, str2) : %d\n", compare);

 	/* 连接后，str2 的总长度 */
	len = strlen(str2);
	printf("strlen(str2) : %d\n", len);

	return 0;
}
