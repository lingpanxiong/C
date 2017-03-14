#include<stdio.h>
/*输出金子塔*/
int main()
{
	void pyramid(int n);

	pyramid(5);
	return 0;
}

void pyramid(int n)
{

	int i,j;
	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%d ", i);
		}
		putchar('\n');
	}
}