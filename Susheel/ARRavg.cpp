#include<iostream>
using namespace std;
int main(){
	int a[5];
	int i,sum=0;
	float avg;
	cout<<"Accept Value\n";
	for(i=0;i<5;i++){
		cin>>*(a+i);
	
	sum=sum+ *(a+i);
	}
	avg=(float)sum/5;
	cout<<"Average is "<<avg;
};
