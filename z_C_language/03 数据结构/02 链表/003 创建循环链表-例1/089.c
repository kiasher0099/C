#include "stdio.h"
typedef struct student
{
    int num;
    struct student *next;
} LNode,  *LinkList;
LinkList create(void)
{
    LinkList head;
    LNode *p1,  *p2;
    char a;
    head = NULL;
    a = getchar();
    while (a != '\n')
    {
        p1 = (LNode*)malloc(sizeof(LNode)); /*分配空间*/
        p1->num = a; /*数据域赋值*/
        if (head == NULL)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        a = getchar();
    }
    p2->next = head; /*尾节点指向头结点*/
    return head;
}


void main()
{
    LinkList L1, head;
    printf("Please input the linklist:\n");
    L1 = create();
    head = L1;
    printf("The resultant linklist is:\n");
    printf("%c ", L1->num);
    L1 = L1->next;
    while (L1 != head)
    {
        /*判断条件为循环到头结点结束*/
        printf("%c ", L1->num);
        L1 = L1->next;
    }
    getch();
}
