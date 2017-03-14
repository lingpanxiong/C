#include<stdio.h>
#include<stdlib.h>
#define t 2
/*struct*/
struct employee{
	char num[20];
	char name[20];
	float jbgz,jj,bx,sfgz;
};
void main()
{
	int n;int Count = 1;
	struct employee e[2];
	for (int i = 1; i <= t; i++)
	{	
		struct employee f;
		printf("请输入第%d个员工的工号：",i);
		scanf("%s",&f.num);
		printf("请输入第%d个员工的姓名：",i);
		scanf("%s",&f.name);

		printf("请输入第%d个员工的基本工资：",i);
		scanf("%f",&f.jbgz);
		printf("请输入第%d个员工的奖金：",i);
		scanf("%f",&f.jj);
		printf("请输入第%d个员工的保险：",i);
		scanf("%f",&f.bx);
		f.sfgz=f.jbgz+f.jj-f.bx;
		printf("编号: %s %s的实发工资是: %2f \n",f.num,f.name,f.sfgz);
		e[Count] = f;
		Count++;
	};
	printf("总共：%d 员工。\n",Count);
	for(int i=1;i<=t;i++)
		printf("奖金（%d） %2f \n",i,e[i].bx);
}