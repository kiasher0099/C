#include "stdio.h"
struct student
{
    int num;
    struct student *next;
};
struct student *create(int n)
{
    int i;
    struct student *head,  *p1,  *p2;
    int a;
    head = NULL;
    printf("The record:\n");
    for (i = n; i > 0; --i)
    {
        p1 = (struct student*)malloc(sizeof(struct student)); /*分配空间*/

        scanf("%d", &a);
        p1->num = a; /*数据域赋值*/
        if (head == NULL)
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

struct student *delnode(struct student *head, int i)
{
    int j = 0;
    struct student *p,  *r;
    p = head;
    while (p && j < i - 1)
    {
        p = p->next;
        ++j;
    } 
    if (!p->next || j > i - 1)
        exit(1);
    r = p->next;
    p->next = r->next;
    free(r);
}

void main()
{
    int n, i;
    int x;
    struct student *q;
    printf("Input the count of the nodes you want to creat:");
    scanf("%d", &n);
    q = create(n);
    i = 2;
    delnode(q, i);
    printf("The third record is deleted!\nThe result is:\n");
    while (q)
    {
        printf("%d  ", q->num);
        q = q->next;
    } getch();
}
