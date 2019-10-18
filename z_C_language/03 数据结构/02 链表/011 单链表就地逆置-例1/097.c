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

struct student *reverse(struct student *head)
{
    struct student *p,  *r;
    if (head->next && head->next->next)
    {
        p = head;
        r = p->next;
        p->next = NULL;
        while (r)
        {
            p = r;
            r = r->next;
            p->next = head;
            head = p;
        } return head;
    }
    return head;
}

void main()
{
    int n, i;
    int x;
    struct student *q;
    printf("Input the count of the nodes you want to creat:");
    scanf("%d", &n);
    q = create(n);
    q = reverse(q);
    printf("The reserve linklist is:\n");
    while (q)
    {
        printf("%d ", q->num);
        q = q->next;
    } getch();
}
