#include<iostream>
using namespace std;
int main(){
      int a[5];
      int i,max,temp,Smax;
      cout<<"Values are "<<endl;
      for(i=0;i<=4;i++){
      	cin>>a[i];
	  }
	   for(i=0;i<=4;i++){
      	cout<<a[i]<<"\t";
	  }
	  cout<<"------------------------------"<<endl;
	  
	  max=a[0];
	  Smax=a[1];
	  if(Smax>max){
	  	temp=max;
	  	max=Smax;
	  	Smax=temp;
	  }
	  
	  for(i=0;i<5;i++){
	  	if(max<a[i]){
	  		max=a[i];
		  }
		  else if(Smax<a[i]&&max>Smax){
		  	Smax=a[i];
		  }
	  }
	  cout<<"Maximum is "<<max<<endl;
	  cout<<"Second Max is "<<Smax;
}
	  
