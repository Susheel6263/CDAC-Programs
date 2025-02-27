#include<iostream>
using namespace std;
int main()
{
    int a[5];//*(a+5)
	int i,max;
	cout<<"Accept No."<<endl;
	for(i=0;i<5;i++){
	    cin>>a[i];
	}
	for(i=0;i<5; i++)
	{
	    if(m>a[i])
	    {
	        max=a[i];
	    }
	}
	cout<<"maximum = "<<max;
