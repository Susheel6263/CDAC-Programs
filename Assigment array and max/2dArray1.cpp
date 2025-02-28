//Multiplication
#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	int c[3][3];
int i,j;
	cout<<"Accept values of first array "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Accept Values for second element "<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++){
			cin>>b[i][j];
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]*b[i][j];
			
			
		}
		cout<<"\n";
		
	}
	cout<<"Value of a and b is "<<endl;
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			
			
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
		
	}
	
	
	
}
