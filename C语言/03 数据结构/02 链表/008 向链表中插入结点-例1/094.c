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
    char b;
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

struct student *insertnode(struct student *head, char x, int i)
{
    int j = 0;
    struct student *p,  *s;
    p = head;
    while (p && j < i - 1)
    {
        p = p->next;
        ++j;
    } 
    if (!p || j > i - 1)
        exit(1);
    s = (struct student*)malloc(sizeof(struct student));
    s->num = x;
    s->next = p->next;
    p->next = s;
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
    x = 123;
    insertnode(q, x, i);
    printf("The result is:\n");
    while (q)
    {
        printf("%d  ", q->num);
        q = q->next;
    } 
}
