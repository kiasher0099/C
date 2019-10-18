
#include <stdio.h>
#define Listsize 100
struct sqlist
{
    int data[Listsize];
    int length;
};
void InsertList(struct sqlist *l, int t, int i)
{
    int j;
    if (i < 0 || i > l->length)
    {
        printf("position error");
        exit(1);
    } 
    if (l->length >= Listsize)
    {
        printf("overflow");
        exit(1);
    }
    for (j = l->length - 1; j >= i; j--)
        l->data[j + 1] = l->data[j];
    l->data[i] = t;
    l->length++;
}

void main()
{
    struct sqlist *sq;
    int i, n, t;
    sq = (struct sqlist*)malloc(sizeof(struct sqlist));
    sq->length = 0;
    printf("Please input the size of the list :");
    scanf("%d", &n);
    printf("Please input the elements of the list:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t);
        InsertList(sq, t, i);
    } printf("Now the list is:\n");
    for (i = 0; i < sq->length; i++)
    {
        printf("%d ", sq->data[i]);
    }
    getch();
}
