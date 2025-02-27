#include<iostream>
using namespace std;
void soo(int a,bool flag =true){
    if(flag==true){
        cout<<"Bool is True = "<<a;
    }
    else{
        cout<<"Bool is Falso = "<<a;
    }
}
int main(){
    soo(100,true);
}
