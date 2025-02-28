//Display Transpose
#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int aT[3][3];
	
	int i,j;
	cout<<"Accept values "<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++){
			cin>>a[i][j];
		}
	}
	cout<<"value of a is "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Transpose for a is "<<endl;
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			cout<<a[j][i]<<"\t";
		}
		cout<<"\n";
	}
	
	
	
}
