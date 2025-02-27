#include<stdio.h>

int main(){

/*{
	int i;
	for(i=0; i<=10; i++){
		printf("Numbers are %d\n",i);
	}
}

    int i=0;
	for(; i<=10;){
		printf("Numbers are %d\n",i);
		i++;
	}
}*/

   /* int i;
    for(i=1; i<=50; i++){
    	if(i%2==0)
    	   printf("Even are %d\n ",i);
    	else
		   printf("odds are %d\n ",i);   
	}
*/
    int i,num=45;
//    printf("Enter any number ");
//    scanf("%d\n",&num);
    
    for(i=2; i<=num; i++)
    {
    	if(num%i==0){
		
    	   printf("prime is %d",num);}
    	else  {
		
		   printf("no"); }
	}
    
}
