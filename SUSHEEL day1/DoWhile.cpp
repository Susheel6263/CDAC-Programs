#include<stdio.h>
int main()
{
	int num, sum = 0;
	do
	{
		printf("enter number\n");
		scanf("%d", &num);
		sum = sum + num;
	} while (num != 0);
	printf("summation=%d", sum);
}

