#include<stdlib.h>
typedef struct node/*二叉链表结构声明*/
{
struct node *lchild;
char data;
struct node *rchild;
}bitnode,*bitree;/*bitnode、bitree为该结构体类型*/
bitree CreatTree()/*构造二叉树*/
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
void preorderTraverse(bitree bt)/*先序遍历二叉树*/
{
if(bt!=NULL)
{
printf("%c",bt->data);/*访问根结点*/
preorderTraverse(bt->lchild);/*访问左子树*/
preorderTraverse(bt->rchild);/*访问右子树*/
}
}
void InorderTraverse(bitree bt)/*中序遍历二叉树*/
{
if(bt!=NULL)
{
InorderTraverse(bt->lchild);/*访问左子树*/
printf("%c",bt->data);/*访问根结点*/
InorderTraverse(bt->rchild);/*访问右子树*/
}
}
void postorderTraverse(bitree bt)
{
if(bt!=NULL)
{
postorderTraverse(bt->lchild);/*访问左子树*/
postorderTraverse(bt->rchild);/*访问右子树*/
printf("%c",bt->data);/*访问根结点*/
}
}
main()
{
bitree root;
root=CreatTree();/*调用CreatTree函数构造二叉树*/
printf("preorder traversal:\n");
preorderTraverse(root);/*调用preorderTraverse函数先序遍历二叉树*/
printf("\n");
printf("inorder traversal:\n");
InorderTraverse(root);/*调用inorderTraverse函数中序遍历二叉树*/
printf("\n");
printf("postorder traversal:\n");
postorderTraverse(root);/*调用postorderTraverse函数后序遍历二叉树*/
printf("\n");
}