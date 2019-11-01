#include <stdio.h>
#include <stdlib.h>

/* 回调函数，分别声明了 （1）指向数组的指针 （2）数组的长度 （3）指向函数的指针 */
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
	/* for (size_t i = 0; i < arraySize; i++)
		array[i] = getNextValue();
    */
	int i;
	for (i = 0; i < arraySize; i++) {
		*(array + i) = getNextValue();
		printf("Pointer array address is: %p\n", (array + i));
	}

}

/* 获取随机值 */
int getNextRandomValue(void)
{
	return rand();
}

int main(void)
{
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
	for (int i = 0; i < 10; i++) {
		printf("\t%d\n", myarray[i]);
	}
	printf("\n");

	return 0;
}

