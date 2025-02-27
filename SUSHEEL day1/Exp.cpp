
#include <stdio.h>

int main()
{
    int base, exponent, i, power = 1;
    printf("Enter base");//2
    scanf("%d", &base);
    printf("Enter exponent");//4
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }
    printf("%d", power);
}
