#include<stdlib.h>
#include<stdio.h>
typedef struct node/*定义线索二叉树结点结构*/
{
char data;
struct node *lchild,*rchild;
int ltag,rtag;
}bithrnode,*bithrtree;
bithrtree CreatTree()/*创建二叉链表*/
{
char a;
bithrtree new;
scanf("%c",&a);
if(a=='#')
return NULL;
else
{
new=(bithrtree)malloc(sizeof(bithrnode));
new->data=a;
new->ltag=0;
new->rtag=0;
new->lchild=CreatTree();/*递归创建左子树*/
new->rchild=CreatTree();/*递归创建右子树*/
}
return new;
}
void inthread(bithrtree p,bithrtree pre)/*将二叉树线索化*/
{
if(p)
{
inthread(p->lchild,pre);/*将左子树线索化*/
if(p->lchild==NULL)
{
p->ltag=1;/*p->ltag置1*/
p->lchild=pre;/*左指针指向其前驱*/
}
if(pre->rchild==NULL)
{
pre->rtag=1;/*pre->rtag置1*/
pre->rchild=p;/*右指针指向其前驱*/
}
pre=p;
inthread(p->rchild,pre);/*将右子树线索化*/
}
}
bithrtree inorder_thread(bithrtree t)/*中序遍历线索二叉树并将其线索化*/
{
bithrtree thrt;/*头结点*/
bithrtree pre,p;/*pre访问过的结点，p当前结点*/
thrt=(bithrtree)malloc(sizeof(bithrnode));/*为头结点分配空间*/
thrt->ltag=0;/*初始化标志域*/
thrt->rtag=1;
thrt->rchild=thrt;/*右指针指向头结点本身*/
if(t==NULL)/*判断二叉树是否为空*/
thrt->lchild=thrt;/*左指针指向头结点*/
else
{
p=thrt->lchild=t;/*头结点左指针指向二叉树*/
thrt->ltag=0;
pre=thrt;
inthread(p,pre);/*进行线索化*/
pre->rchild=thrt;/*最后一个结点*/
pre->rtag=1;
thrt->rchild=pre;/*头结点右指针指向最后一个结点*/
thrt->rtag=1;
}
return thrt;
}
void Inorder_thr(bithrtree t)/*中序遍历线索二叉树*/
{
if(t!=NULL)
{
if(t->ltag==0)
Inorder_thr(t->lchild);/*递归遍历左子树*/
printf("%c",t->data);
if(t->rtag==0)
Inorder_thr(t->rchild);/*递归遍历右子树*/
}
}
void main()
{
bithrtree root;
root=CreatTree();/*构建二叉树*/
printf("inorder traversal:\n");
Inorder_thr(root);/*中序遍历二叉树*/
}