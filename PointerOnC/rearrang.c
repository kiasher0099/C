/*
** �������ӱ�׼�����ж�ȡ�����в��ڱ�׼����д�ӡ��Щ�����У�
** ÿ�������еĺ���һ���Ǹ������ݵ�һ���֡�
**
** ����ĵ�1����һ�����б�ţ����������һ��������β��
** ��Щ�б�ųɶԳ��֣�˵����Ҫ��ӡ�������е��еķ�Χ��
** ���磬0 3 10 12 -1��ʾ��0�е���3�У���10�е���12�е����ݽ�����ӡ��
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS 20				/* ���ܴ��������к� */
#define MAX_INPUT 1000			/* ÿ�������е���󳤶� */

int read_column_numbers(int column[], int max);
void rearrange(char *output, char const *input, int n_columns, int const columns[]);

int main(void)
{
    int n_columns;				/* ���д�����б�� */
    int columns[MAX_COLS];      /* ��Ҫ��������� */
    char input[MAX_INPUT];      /* ���������е����� */
	char output[MAX_INPUT];     /* ��������е����� */

	/*
	** ��ȡ�ô��б��
	*/

	n_columns = read_column_numbers( columns, MAX_COLS );

	/*
	** ��ȡ������ʹ�ӡʣ��������С�
	*/
	
	while(gets(input) != NULL){
		printf("Original input : %s \n", input);
		rearrange(output, input, n_columns, columns);
		printf("Rearranged line : %s \n", output);
	}

	return EXIT_SUCCESS;
}

/*
** ��ȡ�б�ţ���������涨��Χ������ᡣ
*/

int read_column_numbers(int columns[], int max)
{
	int num = 0;
	int ch;
	
	/*
	** ȡ���б�ţ��������ȡ����С��0��ֹͣ��
	*/

	while(num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
		num += 1;

	/*
	** ȷ���Ѿ���ȡ�ı��Ϊż��������Ϊ�������ԶԵ���ʽ���ֵġ�
	*/

	if(num % 2 != 0){
		puts("Last column number is not paired.");
		exit(EXIT_FAILURE);
	}

	/*
	** ���������а������һ�����ֵ��ǲ������ݡ�
	*/

	while((ch = getchar()) != EOF && ch != '\n')
		;

	return num;
}

/*
** ��������У���ָ���е��ַ�������һ���������NULL��β��
*/

void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
	int col;			/* columns ������±� */
	int output_col;		/* ����м����� */
	int len;			/* �����еĳ��� */

	len = strlen(input);
	output_col = 0;

	/*
	** ����ÿ���б��
	*/

	for(col = 0; col < n_columns; col += 2){
		int nchard = columns[col + 1] - columns[col] + 1;
		
		/*
		** ��������н���������������������ͽ�������
		*/
		
		if(columns[col] >= len || output_col == MAX_INPUT - 1)
			break;

		/*
		** ������������ݿռ䲻����ֻ���ƿ������ɵ����ݡ�
		*/

		if(output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;
	
		/*
		** ������ص����ݡ�
		*/

		strcpy(output + output_col, input + columns[col], nchars);
		output_col += nchars;
    }
	output[output_col] = '\0';
}






















