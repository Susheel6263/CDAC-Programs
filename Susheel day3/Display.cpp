#include<iostream>
using namespace std;
void display(char ='*',int=30);
int main(){
  int p=70;
  display();
  cout<<"No arguement passed"<<endl;
   display('#');
   cout<<"first arguement passed"<<endl;
   display('$',p);
      cout<<"second arguement passed"<<endl;
  
}
void display(char c,int p){
    int i;
    for(i=0;i<=p;i++){
  cout<<"output is "<<c<<endl;}
  

    
}
