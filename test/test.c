#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*queue*/

struct qnode
{
	char d;
	struct qnode *next;
}qnode,*p;
struct point
{
	struct qnode *front;
	struct qnode *rear;
}q;

//函数声明
struct point initsqueue(struct point q);
struct point enqueue(struct point q,char e);
char dequeue(struct point q);				//函数前面增加返回类型，函数形参带数据类型。

int main()
{ 	
	char e,b,e1;
	initsqueue(q);
	printf("enter a letter type of char:");
	scanf("%c",&e);
	//enqueue(q,e);
	//printf("enqueue ok!\n");
	e1=dequeue(enqueue(q,e));
	printf("you input is : %c\n", e1);//printf("dequeue e: %c\n", e);
	return 0;
}
//创建队列
struct point initsqueue(struct point q)
{
	q.front=q.rear=(struct qnode *)malloc(sizeof(qnode));//分配动态空间的结构体指针格式必需是结构体定义时的格式
	if(!q.front)
		printf("create fail!");
	q.rear->next=q.front->next=NULL;
	return q;
}
//insert
struct point enqueue(struct point q,char e)
{
	p=(struct qnode *)malloc(sizeof(qnode));//sizeof 后面的是结构体变量，不能是结构体
	if(!p)
		printf("p create fail!");
	//new node
	p->d=e;
	p->next=NULL;
	if(q.rear==NULL)
		{q.front=q.rear=p;}
	else
	{
		q.rear->next = p;					//队列头q.rear->next
		q.rear=p;
	};
								//把q作为队尾
	printf("enqueue e: %c\n", q.rear->d);
	return q;
}
char dequeue(struct point q)
{	
	struct qnode *ptr;
	char temp;
	//printf("%c\n", q.rear->d);
	if(q.rear==NULL)
	{
		printf("队列为空。");
	}
	else
	{	//node节点数据，指针分离
		temp=q.front->d;
		ptr=q.front;
		q.front=ptr->next;
		free(ptr);
		return temp;
	}	
}