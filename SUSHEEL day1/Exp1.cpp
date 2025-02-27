#include <stdio.h>  
#include <math.h>  
int main ()  
{  
   
int b, e;  
int result; 
printf (" Enter the base value : ");  
scanf (" %d", &b);   
printf (" Enter the power value : ");  
scanf (" %d", &e);  
result = pow ( b, e);  
printf (" %d to the power of %d is %d",b,e, result);
}
