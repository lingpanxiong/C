#include<stdio.h>
#include<stdlib.h>
/*maopao sort*/
void main()
{
	int n,temp;
	int *p;
	printf("Enter n(n<8): ");
	scanf("%d",&n);
	printf("%d\n", n);
	if((p=(int*)calloc(n,sizeof(int)))==NULL)
	//if((p=(int*)malloc(n*sizeof(int))) == NULL)
		{
			printf("not able to allcoate memory.\n");
			exit(1);/*from stdlib*/
		}
	printf("Enter %d integers:", n);
	for(int i=0;i<n;i++)
		scanf("%d ",p+i);
	//exchang
	for(int i=1;i< n;i++)//i must:i>=1
		for(int j=0;j<n-i;j++)
			if(*(p+j)>*(p+j+1))
			{
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;

			};

	//output
	printf("a = ");
	for (int i = 0; i < n; i++)
		printf("%d ",*(p+i));
	
	printf("\n");
	//free point *p
	free(p);
	p=NULL;
}