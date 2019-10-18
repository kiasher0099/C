#define MAXSIZE 50
#include<string.h>
#include<stdio.h>
typedef struct
{
char data;/*结点值*/
int weight;/*权值*/
int parent;/*父结点*/
int left;/*左结点*/
int right;/*右结点*/
int flag;/*标志位*/
}huffnode;
typedef struct/*结点编码结构体*/
{
char code[MAXSIZE];
int start;
}huffcode;
huffnode htree[2*MAXSIZE];
huffcode hcode[MAXSIZE];
int select(int i)/*找出权值最小的结点*/
{
int k=32767;
int j,q;
for(j=0;j<=i;j++)
if(htree[j].weight<k&&htree[j].flag==-1)
{
k=htree[j].weight;
q=j;
}
htree[q].flag=1;/*将找到的结点标志位置1*/
return q;
}
void creat_hufftree(int n)/*创建哈夫曼树*/
{
int i,l,r;
for(i=0;i<2*n-1;i++)
htree[i].parent=htree[i].left=htree[i].right=htree[i].flag=-1;/*均置-1*/
for(i=n;i<2*n-1;i++)
{
l=select(i-1);
r=select(i-1);/*找出权值最小的两个结点*/
htree[l].parent=i;
htree[r].parent=i;
htree[i].weight=htree[l].weight+htree[r].weight;/*左右结点权值相加等于新结点的权值*/
htree[i].left=l;
htree[i].right=r;
}
}
creat_huffcode(int n)/*求哈夫曼编码*/
{
int i,f,c;
huffcode d;
for(i=0;i<n;i++)
{
d.start=n+1;
c=i;
f=htree[i].parent;
while(f!=-1)
{
if(htree[f].left==c)/*判断c是否是左子树*/
d.code[--d.start]='0';/*左边编码为0*/
else
d.code[--d.start]='1';/*右边编码为1*/
c=f;
f=htree[f].parent;
}
hcode[i]=d;
}
}
void display_huffcode(int n)/*输入各结点编码*/
{
int i,k;
printf("huffman is:\n");
for(i=0;i<n;i++)
{
printf("%c:",htree[i].data);/*输出结点*/
for(k=hcode[i].start;k<=n;k++)
printf("%c",hcode[i].code[k]);/*输出每个结点对应的编码*/
printf("\n");
}
}
void main()
{
int n=6;
htree[0].data='a';
htree[0].weight=18;
htree[1].data='b';
htree[1].weight=20;
htree[2].data='c';
htree[2].weight=4;
htree[3].data='d';
htree[3].weight=13;
htree[4].data='e';
htree[4].weight=16;
htree[5].data='f';
htree[5].weight=48;
creat_hufftree(n);/*调用函数创建哈夫曼树*/
creat_huffcode(n);/*调用函数构造哈夫曼编码*/
display_huffcode(n);/*显示各结点哈夫曼编码*/
}