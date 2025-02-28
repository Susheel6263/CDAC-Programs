//maxim value in 2d array
#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int i,j,max;
    cout<<"Input values of A is "<<endl;
    for(i=0;i<=2;i++){
    	for(j=0;j<=2;j++){
    		cin>>a[i][j];
		}
	}
	for(i=0;i<=2;i++){
    	for(j=0;j<=2;j++){
    		cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	max=a[0][0];
	for(i=0;i<=2;i++){
    	for(j=0;j<=2;j++){
    		if(max<a[i][j]){
    			max=a[i][j];
			}
		}
	}
	cout<<"Max is "<<max;
}
	
