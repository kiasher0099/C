#include<stdio.h>
#include<stdlib.h>
struct node/*图的顶点结构*/
{
int vertex;
struct node *nextnode;
};
typedef struct node *graph;
struct node vertex_node[6];
void creat_graph(int *node,int n)
{
graph newnode,p;/*定义一个新结点及指针*/
int start,end,i;
for(i=0;i<n;i++)
{
start=node[i*2];/*边的起点*/
end=node[i*2+1];/*边的终点*/
newnode=(graph)malloc(sizeof(struct node));
newnode->vertex=end;/*新结点的内容为边终点处顶点的内容*/
newnode->nextnode=NULL;
p=&(vertex_node[start]);/*设置指针位置*/
while(p->nextnode!=NULL)
p=p->nextnode;/*寻找链尾*/
p->nextnode=newnode;/*在链尾处插入新结点*/
}
}
main()
{
graph p;
int node[100],i,n;
printf("please input the number of sides:\n");
scanf("%d",&n);/*输入无向图的边数*/
printf("please input the vertexes which connected by the sides:\n");
for(i=0;i<4*n;i++)
scanf("%d",&node[i]);/*输入每个边所连接的两个顶点，起始及结束位置不同，每边输两次*/
for(i=1;i<=5;i++)
{
vertex_node[i].vertex=i;/*将每个顶点的信息存入数组中*/
vertex_node[i].nextnode=NULL;
}
creat_graph(node,2*n);/*调用函数创建邻接表*/
printf("the result is:\n");
for(i=1;i<=5;i++)/*将邻接表内容输出*/
{
printf("vertex%d:",vertex_node[i].vertex);/*输出顶点内容*/
p=vertex_node[i].nextnode;
while(p!=NULL)
{
printf("->%3d",p->vertex);/*输出邻接顶点的内容*/
p=p->nextnode;/*指针指向下个邻接顶点*/
}
printf("\n");
}
}