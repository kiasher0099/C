#include <stdio.h>
#define N 10
typedef struct node
{
    char name[20];
    struct node *prior,  *next;
} stud; /*双链表的结构定义*/

/*双链表的创建*/
stud *creat(int n)
{
    stud *p,  *h,  *s;
    int i;
    h = (stud*)malloc(sizeof(stud));
    h->name[0] = '\0';
    h->prior = NULL;
    h->next = NULL;
    p = h;
    for (i = 0; i < n; i++)
    {
        s = (stud*)malloc(sizeof(stud));
        p->next = s;
        printf("Input the %d record: ", i + 1);
        scanf("%s", s->name);
        s->prior = p;
        s->next = NULL;
        p = s;
    }
    p->next = NULL;
    return (h);
}

stud *gettp(stud *head)
{
    stud *p;
    p=head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    return p;
}

void main()
{
    int n, i;
    int x;
    stud *q;
    printf("Input the count of the nodes you want to creat:");
    scanf("%d", &n);
    q = creat(n);
    q = gettp(q);
    printf("The result: ");
    while (q)
    {
        printf("  %s", &*(q->name));
        q = q->prior;
    }
    getch();
}

