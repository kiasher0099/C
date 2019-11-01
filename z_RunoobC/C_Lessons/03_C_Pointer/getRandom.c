#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 要生成和返回随机数的函数 */
int * getRandom()
{
	static int r[10];
	int i;

	/* 设置种子 */
	srand((unsigned)time(NULL));
	for( i=0; i<10; ++i)
	{
		r[i] = rand();
		printf("\t%d\n", r[i]);
	}

	return r;
}

/* 要调用上面定义的函数的主函数 */
int main()
{
	/* 一个指向函数的指针 */
	int *p;
	int i;

	p = getRandom();
	for( i = 0; i < 10; i++)
	{
		printf("*(p + [%d]) : %d\n", i, *(p+i));
	}

	return 0;
}