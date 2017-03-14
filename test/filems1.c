#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*link*/
//define struct
struct stud_node
{
	int num;
	char name[20];
	int score;
	struct stud_node *next;

};
      

void main()
{ 	
	printf("start:\n");
	int num,score;
	char name[20];
	struct stud_node *head,*tail,*p;

	int size = sizeof(struct stud_node);

	
	head=tail=NULL;
	printf("Please input num,name,score: \n");
	scanf("%d%s%d",&num,name,&score);

		p = (struct stud_node *)malloc(size);
		p->num=num;
		strcpy(p->name,name);
		p->score=score;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
			tail->next=p;
		tail=p;
		//printf("%d%s%d\n",&num,name,&score);


		struct stud_node * ptr;
		if(head==NULL)
		{
			printf("\n no records \n");
			return;
		}
			
		printf("\n num name score \n");
		for(ptr=head;ptr;ptr=ptr->next)
			printf("%8d %20s %6d\n",ptr->num,ptr->name,ptr->score);
		while(ptr!=NULL)
		{
			free(ptr);
			ptr= ptr->next;
		}        
}
