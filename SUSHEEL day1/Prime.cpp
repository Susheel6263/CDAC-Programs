#include<stdio.h>
int main()
{
	int num, i = 2;
	printf("enter number\n");
	scanf("%d", &num);

	while (i <num) 
	{
		if (num % i == 0)
			break;
		i++;
	}
	if (i == num)
		printf("prime");
	else
		printf("not prime");
}
