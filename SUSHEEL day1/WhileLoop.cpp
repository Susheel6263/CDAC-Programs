//#include<stdio.h>
//
//int main()
//{
//	int i=10;
//	while(i>=1)
//	{
//		printf("%d\t",i);
//		i--;
//	}
//}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 20)
	{
		if (i % 2 == 0)
			printf("%d\t", i);
		i++;
	}
}
