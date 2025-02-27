#include<iostream>
using namespace std;
int main(){
   int a[5]={1,2,3,4,5};
   int* ptr=a;
   cout<<a[0]<<endl;
   cout<<ptr[0]<<endl;
   ptr++;
   cout<<a[0]<<endl;
   cout<<a[1]<<endl;
   cout<<ptr[1];
}
