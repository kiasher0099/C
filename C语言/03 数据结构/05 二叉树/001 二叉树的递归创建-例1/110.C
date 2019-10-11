#include<stdlib.h>
typedef struct node/*二叉链表结构声明*/
{
struct node *lchild;
char data;
struct node *rchild;
}bitnode,*bitree;/*bitnode、bitree为该结构体类型*/
bitree CreatTree()/*创建二叉链表*/
{
char a;
bitree new;
scanf("%c",&a);
if(a=='#')
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
int btreedepth(bitree bt)/*自定义函数btreedepth()求二叉树的深度*/
{
int ldepth,rdepth;
if(bt==NULL)
return 0;
else
{
ldepth=btreedepth(bt->lchild);
rdepth=btreedepth(bt->rchild);
return (ldepth>rdepth?ldepth+1:rdepth+1);
}
}
int ncount(bitree bt)/*自定义函数ncount求结点的个数*/
{
if(bt==NULL)
return 0;
else return(ncount(bt->lchild)+ncount(bt->rchild)+1);
}
int lcount(bitree bt)/*自定义函数lcount求叶子结点的个数*/
{
if(bt==NULL)
return 0;
else if(bt->lchild==NULL&&bt->rchild==NULL)
return 1;
else return(lcount(bt->lchild)+lcount(bt->rchild));
}
void print(bitree bt)/*自定义函数print用中序遍历的方式输出二叉树结点内容*/
{
if(bt!=NULL)
{
print(bt->lchild);
printf("%c",bt->data);
print(bt->rchild);
}
}
void main()
{
bitree root;
root=CreatTree();/*调用函数创建二叉链表*/
printf("contents of binary tree:\n");
print(root);/*调用函数输出结点内容*/
printf("\ndepth of binary tree:%d\n",btreedepth(root));/*调用函数输出树的深度*/
printf("the number of the nodes:%d\n",ncount(root));/*调用函数输出树中结点个数*/
printf("the number of the leaf nodes:%d\n",lcount(root));/*调用函数输出树中叶子结点个数*/
}