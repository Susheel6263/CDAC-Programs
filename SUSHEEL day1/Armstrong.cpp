
#include<stdio.h>
int main()
{
	int n, rem, sum = 0, orgn;
	printf("enter number\n");
	scanf("%d", &n);
	orgn = n;
	while (n != 0)
	{
		rem = n % 10;
		n = n / 10;
		sum = sum + rem * rem * rem;
	}
	if (sum == orgn)
		printf("%d is armstrong", orgn);
	else
		printf("%d is not armstrong", orgn);

}
