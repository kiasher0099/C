#include "stdio.h"
struct LNode
{
    int data;
    struct LNode *next;
};
struct LNode *create(int n)
{
    int i;
    struct LNode *head,  *p1,  *p2;
    int a;
    head = NULL;
    printf("Input the integers:\n");
    for (i = n; i > 0; --i)
    {
        p1 = (struct LNode*)malloc(sizeof(struct LNode)); /*分配空间*/
        scanf("%d", &a);				/*输入数据*/
        p1->data = a; /*数据域赋值*/
        if (head == NULL)  /*指定头结点*/
        {
            head = p1;
            p2 = p1;
        } 
        else
        {
            p2->next = p1; /*指定后继指针*/
            p2 = p1;
        }
    }
    p2->next = NULL;
    return head;
}

void main()
{
    int n;
    struct LNode *q;
    printf("Input the count of the nodes you want to creat:");
    scanf("%d", &n);
    q = create(n);
    printf("The result is:\n");
    while (q)
    {
        printf("%d  ", q->data);
        q = q->next;
    } getch();
}
