#include <stdio.h>

int main ()
{
	int var = 20;       /* 实际变量的声明，此时的'var'这个变量是存在某个地址的，地址对应某个内存单元，该单元中存储了数据'20' */
	int *p;			    /* 指针变量的声明，定义了一个指针，即一个内存单元的地址变量 */
//	int ip;				

	p = &var;			/* 在指针变量中存储'var'的地址信息，就是将地址的值传递给指针这个变量 */
//	ip = &var;			// Store the 'var' address in an int variable

	printf("Address of var variable: %p \n", &var);					/* 在指针变量中存储的地址，用&直接输出了var所存储的数据的内存单元的地址 */

	printf("Address stored in pointer 'p' variable: %p \n", p);

//	printf("Address stored in int 'ip' variable: %p \n", ip);		/* 在指针变量中存储的地址，ip代表的是用&获取的var的地址的数值 */

	printf("Value of *p variable: %d \n", *p);						/* 使用指针访问值，*ip代表的是定义到这个内存单元之后，内存单元中所存储的数据的值，也就是20 */

	return 0;
}
