#include<iostream>
using namespace std;
void display(int a=1,int b=2,int c=3,int d=5){
    cout<<a+b+c+d<<endl;
}
int main(){
    display();
     display(3);
      display(4,6,7);
       display(4,68,84,5);
}
