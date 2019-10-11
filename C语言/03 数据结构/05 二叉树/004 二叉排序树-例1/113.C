#include<stdlib.h>
#include<stdio.h>
typedef struct node/*二叉链表结构声明*/
{
struct node *lchild;
int data;
struct node *rchild;
}bitnode,*bitree;/*bitnode、bitree为该结构体类型*/
bitree CreatTree()/*构造二叉树*/
{
int a;
bitree new;
scanf("%d",&a);
if(a==0)
return NULL;
else
{
new=(bitree)malloc(sizeof(bitnode));
new->data=a;
new->lchild=CreatTree();/*递归创建左子树*/
new->rchild=CreatTree();/*递归创建右子树*/
}
return new;
}
void Search(bitree p,int key)/*自定义函数search实现数据查找*/
{
int n=0;
while(p!=NULL)/*当结点不为空执行循环体语句*/
{
	n++;/*记录查询次数*/
if(p->data==key)/*找到要查找的元素*/
{
	printf("successful,search %d times",n);/*输出查询次数*/
	break;/*跳出循环*/
}
else if(p->data>key)/**/
p=p->lchild;/*当结点的数据比要查找的数据大，则继续查询左孩子结点*/
else p=p->rchild;/*当结点的数据比要查找的数据小，则继续查询右孩子结点*/
}
if(p==NULL)
printf("no found!");/*当结点为空，输出提示未查到*/
}
void main()
{
bitree root;
int key;
root=CreatTree();/*构建二叉排序树*/
printf("please input the number which do you want to search:\n");
scanf("%d",&key);/*输入要查找的数据*/
Search(root,key);/*调用Search函数进行查找*/
}