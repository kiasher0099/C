#include <stdio.h>

void inplace_swap(int *x, int *y) {

    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void main() {
    int x = 1;
    int y = 2;
    printf("x = %d\ny = %d\n", x, y);
    inplace_swap(&x,&y);
    printf("x = %d\ny = %d\n", x, y);

}
