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
    h = (stud*)malloc(sizeof(stud)); /*创建头结点*/
    h->name[0] = '\0';
    h->prior = NULL;
    h->next = NULL;
    p = h;
    printf("Input the records:\n ");
    for (i = 0; i < n; i++)
    {
        s = (stud*)malloc(sizeof(stud));
        p->next = s;

        scanf("%s", s->name);
        s->prior = p;
        s->next = NULL;
        p = s;
    }
    p->next = NULL;
    return (h);
}

stud *reverse(stud *head)
{
    stud *p,  *r,  *h;
    h = head->next;
    if (h && h->next)
    {
        p = h;
        r = p->next;
        p->next = NULL;
        while (r)
        {
            p = r;
            r = r->next;
            p->next = h;
            h->prior = p;
            h = p;
        }
        head->next = h;
        h->prior = head;
        return head;
    }


}

void main()
{
    int n, i;
    int x;
    stud *q;
    printf("Input the count of the nodes you want to creat:");
    scanf("%d", &n);
    q = creat(n);
    q = reverse(q);
    printf("The result linklist:\n");
    while (q)
    {
        printf("%s ", &*(q->name));
        q = q->next;
    }
    getch();
}
