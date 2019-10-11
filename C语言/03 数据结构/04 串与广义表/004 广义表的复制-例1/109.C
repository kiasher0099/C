#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;
typedef struct lnode
{
 int tag;
 union
 {
  ElemType data;
  struct lnode *sublist;
 }val;
 struct lnode *next;
}GLNode;
void creatGList(struct lnode* *gl)
{
    char ch;/* 读入一个字符*/
   ch=getchar();
if(ch == '#'){
        *gl = NULL;
    }
    else if(ch == '(')/* 若输入左括号则建立递归构造子表 */
    {
        *gl = malloc(sizeof(struct lnode));
        (*gl)->tag = 1;
	creatGList(&((*gl)->val.sublist));
    }
    else /* 若输入为字符则建立单元素结点 */
    {
        *gl = malloc(sizeof(struct lnode));
        (*gl)->tag = 0;
	(*gl)->val.data = ch;
    }
    ch=getchar(); /*读入一个字符*/
    if(*gl == NULL){
        ;
    }
    /* 若输入为逗号则递归构造后继表 */
    else if(ch == ','){
        creatGList(&((*gl)->next));
    }
    /* 若输入为右括号或分号则置*gl的后继指针域为空 */
    else 
        (*gl)->next = NULL;
    
    return;
}

void printGList(struct lnode *gl)/*打印广义表*/
{
    
    if(gl->tag == 1)/*判断是否存在子表*/
    {
        /* 存在子表，先输出左括号 */
        printf("(");
        /* 若子表为空，则输出'#'字符 */
	if(gl->val.sublist == NULL){
            printf("#");
        }
        /* 若子表非表，则递归输出子表 */
        else{
	    printGList(gl->val.sublist);
        }
        printf(")");/*输出右括号 */
    }
    else	    
	printf("%c", gl->val.data);/*如果是单个结点则直接输出*/
   
    if(gl->next != NULL) /* 输出结点的后继表 */
    {
        printf(", ");/*输出逗号*/
        printGList(gl->next); /*递归输出后继表*/
    }
    return;
}

GLNode *GLCopy(GLNode *gl)/*广义表复制函数*/
{
 GLNode *q;
 if(gl==NULL)
  return NULL;
 q=(GLNode*)malloc(sizeof(GLNode));
 q->tag=gl->tag;
 if(gl->tag==1)
  q->val.sublist=GLCopy(gl->val.sublist);/*递归复制子表*/
 else
  q->val.data=gl->val.data;/*复制数据信息*/
 q->next=GLCopy(gl->next);/*递归复制next信息*/
 return q;
}
GLNode *head(GLNode *gl)
{
 GLNode *p=gl->val.sublist;
 GLNode *q,*t;
 if(gl==NULL)
 {
 printf("NULL\n");
 return NULL;
 }
 if(gl->tag==0)
 {
  printf("atom is not head！\n");
  return NULL;
 }
 if(p->tag==0)
 {
  q=(GLNode*)malloc(sizeof(GLNode));
  q->tag=0;
  q->val.data=p->val.data;
  q->next=NULL;
 }
 else
 {
  t=(GLNode*)malloc(sizeof(GLNode));
  t->tag=1;t->val.sublist=p->val.sublist;
  t->next=NULL;
  q=GLCopy(t);
  free(t);
 }
 return q;
}
GLNode *tail(GLNode *gl)
{

 GLNode *p=gl->val.sublist;
 GLNode *q,*t;
 if(gl==NULL)
 {
	 printf("NULL\n");
         return NULL;
 }
	 if(gl->tag==0)
 {
  printf("atom is not tail!\n");
  return NULL;
 }
 p=p->next;
 t=(GLNode*)malloc(sizeof(GLNode));
 t->tag=1;t->val.sublist=p;
 t->next=NULL;
 q=GLCopy(t);
 free(t);
 return q;
}
void main()
{
 struct lnode *g,*v;
 struct lnode *h;
 creatGList(&h);
 printf("\n");
 v=head(h);
 if(v!=NULL)
 {
	 printf("Head is:");
 printGList(v);
 printf("\n");
 }
 g=tail(h);
 if(g!=NULL)
 {
 printf("Tail is:");
 printGList(g);
 printf("\n");
 }
 if(h!=NULL)
 {
	 printf("Glist is:");
 printGList(h);
 printf("\n");
 }
 else
	 printf("Glist is NULL");
}
