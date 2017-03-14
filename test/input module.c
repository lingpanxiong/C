#include<stdio.h>
/*gets getchar&scanf*/
void main()
{
	char a[8];
	int i,count=0;
	char string1[20];
	printf("Enter a string: ");
	for (int i = 0; i < 8; i++)
	{
		scanf("%c",&a[i]);
		if (a[i]=='\n')
			{a[i]='\0';break;};
		if (a[i]>='a'&&a[i]<='z')		
		{
			count++;
		}
	}
	
	for (int i = 0; i < 7; i++)
		printf("%c",a[i]);
	printf("\n");
	printf("%d\n", count);
	gets(string1);
	printf("%s\n",string1);

}