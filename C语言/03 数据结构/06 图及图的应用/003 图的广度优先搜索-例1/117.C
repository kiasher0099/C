#include <stdio.h>
#include <stdlib.h>
struct node
{
    int vertex;
    struct node *nextnode;
};
typedef struct node *graph;
struct node vertex_node[10];
#define MAXQUEUE 100
int queue[MAXQUEUE];
int front =  - 1;
int rear =  - 1;
int visited[10];
void creat_graph(int *node, int n)
{
    graph newnode, p; /*定义一个新结点及指针*/
    int start, end, i;
    for (i = 0; i < n; i++)
    {
        start = node[i *2]; /*边的起点*/
        end = node[i *2+1]; /*边的终点*/
        newnode = (graph)malloc(sizeof(struct node));
        newnode->vertex = end; /*新结点的内容为边终点处顶点的内容*/
        newnode->nextnode = NULL;
        p = &(vertex_node[start]); /*设置指针位置*/
        while (p->nextnode != NULL)
            p = p->nextnode;
        /*寻找链尾*/
        p->nextnode = newnode; /*在链尾处插入新结点*/
    }
}

int enqueue(int value) /*元素入队列*/
{
    if (rear >= MAXQUEUE)
        return  - 1;
    rear++; /*移动队尾指针*/
    queue[rear] = value;
}

int dequeue() /*元素出队列*/
{
    if (front == rear)
        return  - 1;
    front++; /*移动队头指针*/
    return queue[front];
}

void bfs(int k) /*广度优先搜索*/
{
    graph p;
    enqueue(k); /*元素入队*/
    visited[k] = 1;
    printf("vertex[%d]", k);
    while (front != rear)
     /*判断是否对空*/
    {
        k = dequeue(); /*元素出队*/
        p = vertex_node[k].nextnode;
        while (p != NULL)
        {
            if (visited[p->vertex] == 0)
             /*判断其是否被访问过*/
            {
                enqueue(p->vertex);
                visited[p->vertex] = 1; /*访问过的元素置1*/
                printf("vertex[%d]", p->vertex);
            }
            p = p->nextnode; /*访问下一个元素*/
        }
    }
}

main()
{
    graph p;
    int node[100], i, sn, vn;
    printf("please input the number of sides:\n");
    scanf("%d", &sn); /*输入无向图的边数*/
    printf("please input the number of vertexes\n");
    scanf("%d", &vn);
    printf("please input the vertexes which connected by the sides:\n");
    for (i = 0; i < 4 *sn; i++)
        scanf("%d", &node[i]);
    /*输入每个边所连接的两个顶点，起始及结束位置不同，每边输两次*/
    for (i = 1; i <= vn; i++)
    {
        vertex_node[i].vertex = i; /*将每个顶点的信息存入数组中*/
        vertex_node[i].nextnode = NULL;
    }
    creat_graph(node, 2 *sn); /*调用函数创建邻接表*/
    printf("the result is:\n");
    for (i = 1; i <= vn; i++)
    /*将邻接表内容输出*/
    {
        printf("vertex%d:", vertex_node[i].vertex); /*输出顶点内容*/
        p = vertex_node[i].nextnode;
        while (p != NULL)
        {
            printf("->%3d", p->vertex); /*输出邻接顶点的内容*/
            p = p->nextnode; /*指针指向下个邻接顶点*/
        }
        printf("\n");
    }
    printf("the result of breadth-first search is:\n");
    bfs(1); /*调用函数进行深度优先遍历*/
    printf("\n");
}