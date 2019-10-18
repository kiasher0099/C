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
    else if(ch == '(')/*若输入左括号则递归构造子表*/
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
    
    else/* 否则*gl后继指针域为空 */ 
        (*gl)->next = NULL;
    
    return;
}

void printGList(struct lnode *gl)/*打印广义表*/
{
    
    if(gl->tag == 1)/*判断是否存在子表*/
    {
        printf("(");/* 存在子表，先输出左括号 */
	if(gl->val.sublist == NULL){
            printf("#");
        }
       
        else{
	    printGList(gl->val.sublist); /*递归输出子表*/
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

int GLLength(GLNode *gl)/*求广义表的长度*/
{
 int n=0;
 gl=gl->val.sublist;
 while(gl!=NULL)
 {
  n++;/*若gl不为空n加1*/
  gl=gl->next;
 }
 return n;
}
int GLDepth(GLNode *gl)/*求广义表的深度*/
{
 int max=0,dep;
 if(gl->tag==0)
  return 0;
 gl=gl->val.sublist;
 if(gl==NULL)
  return 1;
 while(gl!=NULL)
 {
  if(gl->tag==1)
  {
   dep=GLDepth(gl);/*递归求广义表深度*/
  if(dep>max)
   max=dep;
  }
  gl=gl->next;
 }
 return(max+1);/*返回广义表的深度*/
}
void main()
{
 int len=0;
 int dep=0;
 struct lnode *h;
 creatGList(&h);
 len=GLLength(h);
 dep=GLDepth(h);
 printf("\n");
 printf("The length is:");
 printf("%d",len);
 printf("\n");
 printf("The depth is:");
 printf("%d",dep);
 printf("\n");
 if(h!=NULL)
 {
	 printf("Glist is:");
 printGList(h);
 printf("\n");
 }
 else
	 printf("Glist is NULL");
}
