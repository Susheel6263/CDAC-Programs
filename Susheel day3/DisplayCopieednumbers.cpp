#include<iostream>
using namespace std;
int main()
{ 
    int a[5],b[5];
    int i,sum=0;
    
    cout<<"Accept Values"<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    for(i=0;i<5;i++){
        b[i]=a[i];
    }
    cout<<"Display numbers"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<"\t"<<endl;
    }
    for(i=0;i<5;i++){
        sum=sum+*(b+i);
    }
    cout<<"Sum of values is "<<sum;
	
	
}
