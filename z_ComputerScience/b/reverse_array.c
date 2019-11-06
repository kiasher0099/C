#include <stdio.h>

void inplace_swap(int *x, int *y) {

    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}


void reverse_array(int a[], int cnt) {
    int first, last;
//when condition set to "first <= last", the center value will counter to zero, as *x ^ *x = 0, so when the number of array is odd, the center value is always zero.
    for (first = 0, last = cnt-1;first < last;first++,last--)
        inplace_swap(&a[first], &a[last]);
}

void main() {
    int x[] = {1,2,3,4,5};
    for (int i=0;i<5;i++){
        printf("%d ", x[i]);
    }
    printf("Reversed:");
    reverse_array(x,5);
    for (int i=0;i<5;i++){
        printf("%d ", x[i]);
    }
    printf("\n");
}
