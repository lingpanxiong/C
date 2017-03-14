#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*stack*/
//创建栈结构

#define stack_init_size 100
#define stackincrement 1
struct stackt
{
	char *base;
	char *top;
	int stacksize;
}sqstack;

struct stackt *s=&sqstack;

//函数声明
initstack(struct stackt *s);
puse(struct stackt *s,char e);
pop(struct stackt *s,char e);

void main()
{ 	char e,b;
	
	initstack(s);
	printf("initstack is ok.\n");
	printf("start:");
	printf("enter a \"e\" for insert:\n");

	for(int i=1;i<5;i++)
	{	
		e=getchar();
		puse(s,e);
	}

	for(int i=1;i<5;i++)
	{
		printf("%c  \n", pop(s,e));
	}
	

	//printf("%c\n", pop(s,e));
	//printf("pop is ok.\n");
}
//新建栈
initstack(struct stackt *s)
{
	s->base=(char *)malloc(stack_init_size * sizeof(char));
	s->top=s->base;
	s->stacksize=stack_init_size;
	return s;
}
//插入数据
puse(struct stackt *s,char e)
{	if(s->top-s->base >= s->stacksize)
		printf("the stack is overflow.");
	*s->top++=e;
	//s->top=s->top++;
	//return OK;
	//printf("puse: %c\n", e);
}
//pop
pop(struct stackt *s,char e)
{
	e= *--s->top;
	//printf("pop: %c\n", e);
	//s->top=s->top--;
	return e;
}e;
	char *top;
	int stacksize;
}sqstack;

//s=&sqstack;
//函数声明
initstack(struct stackt s);
puse(struct stackt s,char e);
pop(struct stackt s,char e);

void main()
{ 	char e;
	printf("start:");
	printf("enter a \"e\" for insert:");
	scanf("%c",&e);
	initstack(sqstack);
	printf("initstack is ok.\n");
	puse(s,e);
	printf("puse is ok.\n");
	pop(s,e);
	printf("%c\n", e);
}
//新建栈
initstack(struct stackt s)
{
	s.base=(char *)malloc(100*sizeof(char));
	s.top=s.base;
	s.stacksize=100;
	return s;
}
//插入数据
puse(struct stackt s,char e)
{
	s.top++=e;
	//return OK;
}
//pop
pop(struct stackt s,char e)
{
	e=* --s.top;
	return e;
}