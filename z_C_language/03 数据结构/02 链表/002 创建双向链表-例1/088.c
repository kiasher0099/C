#include <stdio.h>
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
        printf("Input the %d student's name: ", i + 1);
        scanf("%s", s->name);
        s->prior = p;
        s->next = NULL;
        p = s;
    }
    p->next = NULL;
    return (h);
}

/*查找*/
stud *search(stud *h, char *x)
{
    stud *p;
    char *y;
    p = h->next;
    while (p)
    {
        y = p->name;
        if (strcmp(y, x) == 0)
            return (p);
        else
            p = p->next;
    }
    printf("cannot find data!\n");
}

/*删除*/
void del(stud *p)
{
    p->next->prior = p->prior;
    p->prior->next = p->next;
    free(p);
}

/*主函数*/
main()
{
    int number;
    char sname[20];
    stud *head,  *sp;
    puts("Please input the size of the list:");
    scanf("%d", &number);
    head = creat(number);
    sp = head->next;
    printf("\nNow the double list is:\n");
    while (sp)
    {
        printf("%s ", &*(sp->name));
        sp = sp->next;
    }
    printf("\nPlease input the name which you want to find:\n");
    scanf("%s", sname);
    sp = search(head, sname);
    printf("the name you want to find is:%s\n",  * &sp->name);
    del(sp);
    sp = head->next;
    printf("\nNow the double list is:\n");
    while (sp)
    {
        printf("%s ", &*(sp->name));
        sp = sp->next;
    }
    printf("\n");
    puts("\n Press any key to quit...");
    getch();
}
