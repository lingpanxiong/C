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
struct stud_node *head,*tail,*p;
head=tail=NULL;    
struct stud_node * Create_Stud_Doc();  
Print_Stud_Doc(struct stud_node * head);

void main()
{ 	
	for (int i = 0; i < 3; i++)
{
	Print_Stud_Doc(Create_Stud_Doc()); 
}  

		while(head!=NULL)
		{
			free(head);
			head= head->next;
		}
}
struct stud_node * Create_Stud_Doc()
{
	int num,score;
	char name[20];
	int size = sizeof(struct stud_node);
	
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
		return head;
}
Print_Stud_Doc(struct stud_node * head)
{
		struct stud_node * ptr;
		if(head==NULL)
		{
			printf("\n no records \n");
			return 0;
		}
			
		printf("\n num name score \n");
		for(ptr=head;ptr;ptr=ptr->next)
			printf("%8d %20s %6d\n",ptr->num,ptr->name,ptr->score);

}