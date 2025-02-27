#include <iostream>
using namespace std;
int main() {
   int a[6]={1,2,3,4,6,6};
   int e[6],o[6];
   int i,x=0,y=0;
   for(i=0;i<=5;i++)
   {
       if(a[i]%2==0)
       {
           e[x]=a[i];
           x++;
       }
       else
       {
           o[y]=a[i];
           y++;
       }
   }
   for(i=0; i<x;i++)
   {
       cout<<"Even is "<<e[i]<<endl;
   
       cout<<"odd is "<<o[i];
   }
   }
