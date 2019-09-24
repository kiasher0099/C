#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
	size_t i;
	for (i=0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}

void show_int(int x){
	printf("Int val: ");
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	printf("float val: ");
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	printf("pointer val: ");
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(){
	static int val = 0x87654321;
	byte_pointer valp = (byte_pointer) &val;
	test_show_bytes(12345);
	test_show_bytes(0x87654321);
	show_bytes(valp,1);
	show_bytes(valp,2);
	show_bytes(valp,3);
	
	short x = 12345;
	short mx = -x;
	show_bytes((byte_pointer) &x, sizeof(short));
	show_bytes((byte_pointer) &mx, sizeof(short));
	

	const char *s = "abcdef";
	show_bytes((byte_pointer) s, strlen(s));
	return 0;
}



