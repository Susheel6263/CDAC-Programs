#include<iostream>
#include<string.h>  
  struct tooo{
  	int r;
  	char name[10];
  public:
  void display(int s){
  	r=s;
  
  }
  };
  
  int main(){
  	struct tooo s2;
  	s2.display(7);
  	cout<<r;
  }

