//minimum value in array
#include<iostream>
using namespace std;
int main(){
	int a[5];
	int i,min;
	min=a[0];
	cout<<"accept values "<<"\t";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		if(min>a[i]){
			min=a[i];
		}
		
	}
	cout<<"min = "<<min;
}
