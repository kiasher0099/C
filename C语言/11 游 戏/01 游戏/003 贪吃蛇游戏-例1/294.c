
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*�Թ�������*/
int maze[100][100];

/*�Թ�������������*/
int m=7,n=7;
/*
*���Թ����г�ʼ����������������Թ�
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
*����ջ��ջ�Ľڵ�
*/
typedef struct Node
{
int x;
int y;
struct Node *next;
}Node,*Stack;

/*
*��ʼ��Stack
*/
void InitStack(Node *Stack)
{
Stack=(Node *)malloc(sizeof(Node));
if(Stack==NULL)
{
    printf("����ռ�ʧ��\n");
    exit(0);
}else
{
    Stack->next=NULL;
}
}



/*
*ѹջ
*/
void push(Node *Stack,int x,int y)
{
Node *temp;
temp=(Node *)malloc(sizeof(Node));
if (!temp)
{
    printf("�����ڴ�ռ����");
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
*��ջ
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
*�ж�ջ�Ƿ�Ϊ��
*/
int isEmpty(Node *Stasck)
{
return ((Stasck->next)==NULL);
}

/*
*�жϴӸõ�ʱ����������������ƶ����������ƶ��ķ���
*/
int pass(int i,int j)
{
/*�ҷ���*/
if(j<n-1&&(maze[i][j+1]==0||maze[i][j+1]==9))
{
    return 2;
}
/*�·���*/
if(i<m-1&&(maze[i+1][j]==0||maze[i+1][j]==9))
{
    return 3;
}
/*����*/
if(j>=1&&(maze[i][j-1]==0||maze[i][j-1]==9))
{
    return 4;
}
/*�Ϸ���*/
if(i>=1&&(maze[i-1][j]==0||maze[i-1][j]==9))
{
    return 5;
}
return -1;
}

/*
*���Թ����д�ӡ
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
*���Թ�����·������
*��������������º���
*0.�õ�û�б�̽�������ҿ���
*1.�õ㲻����
*2.�õ��ǿ��еģ��ҽ������򶫵�̽��
*3.�õ��ǿ��еģ��ҽ��������ϵ�̽��
*4.�õ��ǿ��еģ��ҽ�����������̽��
*5.�õ��ǿ��еģ��ҽ������򱱵�̽��
*6.�õ������
*9.�õ��ǳ���
*-1.�õ��Ѿ���������ĸ����򣬲����ҵ���Ч��·��������Ϊ��1
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
    printf("���Թ�������·������:\n");
    printMaze();
}else
{
    printf("\nSorry,���Թ��޽�\n");
}
}
/*
*������
*Ҫ������m��n��ֵ��Ҫ����Ҫ��
*�����ӡ�����ɵ��Թ���Ȼ�����Ѱ��·��
*��������ҵ����ڣ��򻭳���·��
*������Թ�û�г��ڣ�����ʾ�Թ��޽�
*/
int main()
{
/*printf("�������Թ�������m(����0��С��100):");
scanf("%d",&m);
printf("�������Թ�������n(����0��С��100):");
scanf("%d",&n);
if(m<0||m>100||n<0||n>100){
    printf("�������ݴ���,�����˳�\n");
    exit(-1);
}*/
      InitMaze();
      printf("ԭ�Թ�Ϊ:\n");
printMaze();
FindPath();
getch();
return 0;
}
