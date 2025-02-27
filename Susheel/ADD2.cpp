#include<iostream>
using namespace std;
void add(int,int=2,int=3);
int main(){
  
  // add();//
   add(10);
   add(12,2);
   add(2,3,56);
  
}
void add(int a,int b,int c){
  cout<<"output "<<a+b+c<<endl;
   
    
}
