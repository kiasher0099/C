
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*迷宫的数组*/
int maze[100][100];

/*迷宫的行数和列数*/
int m=7,n=7;
/*
*对迷宫进行初始化，用随机数产生迷宫
*/
void InitMaze()
{
      int i,j,temp;
srand((unsigned)time(NULL));
      for(i=1;i<=m;i++)
          for(j=1;j<=n;j++)
          {
              temp=rand()%100;
              if(temp>30)
              {
                  maze[i-1][j-1]=0;
              }else
              {
                  maze[i-1][j-1]=1;
              }
          }
      maze[0][0]=0;
      maze[m-1][n-1]=9;
}

/*
*定义栈和栈的节点
*/
typedef struct Node
{
int x;
int y;
struct Node *next;
}Node,*Stack;

/*
*初始化Stack
*/
void InitStack(Node *Stack)
{
Stack=(Node *)malloc(sizeof(Node));
if(Stack==NULL)
{
    printf("分配空间失败\n");
    exit(0);
}else
{
    Stack->next=NULL;
}
}



/*
*压栈
*/
void push(Node *Stack,int x,int y)
{
Node *temp;
temp=(Node *)malloc(sizeof(Node));
if (!temp)
{
    printf("分配内存空间错误");
    return;
}
else
{
    temp->x=x;
    temp->y=y;
    temp->next=Stack->next;
    Stack->next=temp;
}
}

/*
*出栈
*/
void pop(Node *Stack,int *x,int *y)
{
Node *temp;
temp=Stack->next;
if(!temp){
    return;
}else{
    *x=temp->x;
    *y=temp->y;
}
Stack->next=temp->next;
free(temp);
}
/*
*判断栈是否为空
*/
int isEmpty(Node *Stasck)
{
return ((Stasck->next)==NULL);
}

/*
*判断从该点时候可以向其他方向移动，并返回移动的方向
*/
int pass(int i,int j)
{
/*右方向*/
if(j<n-1&&(maze[i][j+1]==0||maze[i][j+1]==9))
{
    return 2;
}
/*下方向*/
if(i<m-1&&(maze[i+1][j]==0||maze[i+1][j]==9))
{
    return 3;
}
/*左方向*/
if(j>=1&&(maze[i][j-1]==0||maze[i][j-1]==9))
{
    return 4;
}
/*上方向*/
if(i>=1&&(maze[i-1][j]==0||maze[i-1][j]==9))
{
    return 5;
}
return -1;
}

/*
*对迷宫进行打印
*/
void printMaze()
{
int i=0,j=0;
printf("  ");
for(i=0;i<n;i++)
{
    if(i+1>9)
     printf("%d ",i+1);
    else
     printf(" %d",i+1);
}
printf("\n");
for(i=0;i<m;i++){
    if(i+1>9)
     printf("%d",i+1);
    else
     printf(" %d",i+1);
          for(j=0;j<n;j++)
          {
              if(maze[i][j]==0||maze[i][j]==9||maze[i][j]==-1)
              {
                  printf("a ");
              }
     else if(maze[i][j]==1)
              {
                  printf("b ");
              }else 
              if(maze[i][j]==2)
     {
      printf("D ");
     }else if(maze[i][j]==3)
     {
      printf("X ");
     }else if(maze[i][j]==4)
     {
      printf("A ");
     }else if(maze[i][j]==5)
     {
      printf("W ");
     }
          }
          printf("\n");
      }
}
/*
*对迷宫进行路径搜索
*数组的数字有以下含义
*0.该点没有被探索过，且可行
*1.该点不可行
*2.该点是可行的，且进行了向东的探索
*3.该点是可行的，且进行了向南的探索
*4.该点是可行的，且进行了向西的探索
*5.该点是可行的，且进行了向北的探索
*6.该点是入口
*9.该点是出口
*-1.该点已经遍历完毕四个方向，不能找到有效的路径，则置为－1
*/
void FindPath()
{
int curx=0,cury=0;
int count=0;
int flag=0;
Node *Stacks=NULL;
InitStack(Stacks);
do{
    if(maze[curx][cury]==9)
    {
     flag=1;
    }
    switch(pass(curx,cury)){
    case 2:
     maze[curx][cury]=2;
     push(Stacks,curx,cury);
     cury++;
     break;
    case 3:
     maze[curx][cury]=3;
     push(Stacks,curx,cury);
     curx++;
     break;
    case 4:
     maze[curx][cury]=4;
     push(Stacks,curx,cury);
     cury--;
     break;
    case 5:
     maze[curx][cury]=5;
     push(Stacks,curx,cury);
     curx--;
     break;
    case -1:
     maze[curx][cury]=-1;
     if(!isEmpty(Stacks))
      pop(Stacks,&curx,&cury);
     break;
    }
    count++;
}while(!isEmpty(Stacks)&&flag==0);
if(flag==1)
{
    printf("该迷宫的行走路径如下:\n");
    printMaze();
}else
{
    printf("\nSorry,该迷宫无解\n");
}
}
/*
*主函数
*要求输入m，n的值，要符合要求
*程序打印出生成的迷宫，然后进行寻找路径
*如果可以找到出口，则画出该路径
*如果该迷宫没有出口，则提示迷宫无解
*/
int main()
{
/*printf("请输入迷宫的行数m(大于0，小于100):");
scanf("%d",&m);
printf("请输入迷宫的列数n(大于0，小于100):");
scanf("%d",&n);
if(m<0||m>100||n<0||n>100){
    printf("输入数据错误,程序退出\n");
    exit(-1);
}*/
      InitMaze();
      printf("原迷宫为:\n");
printMaze();
FindPath();
getch();
return 0;
}
