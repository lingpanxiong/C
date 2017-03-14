#include<stdio.h>
/*比较法排序从小到大*/
int main()
{
	int i,index,n,temp;
	int a[10];

	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d integers:",n);

	for (int i = 0; i < n; i++)	
	{
		scanf("%d",&a[i]);
	}

	printf("before sorted:");
		for (int i = 0; i < n; i++)
			printf("%d",a[i]);
		printf("\n");
/*
	for (k = 0; k < n-1; k++)
	{
		index = k;
		for(i= k+1;i< n; i++)
			if (a[i]<a[index]) index = i;

		temp = a[index];
		a[index] = a[k];
		a[k] = temp;
	}
	*/
		for (index = 0; index < n-1; index++)
	{
			for(i= index+1;i< n; i++)
				if (a[i]<a[index])		//if (a[i]>a[index])从大到小，交换部分相同
				{
				temp = a[i];
				a[i] = a[index];
				a[index] = temp;
				};
			
	}
	printf("after sorted:");
		for (int i = 0; i < n; i++)
			printf("%d",a[i]);
		printf("\n");
		return 0;
}