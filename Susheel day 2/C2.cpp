#include<iostream>
using namespace std;
int main(){
        int x=10,y=20;
        int * const ptr=&x;
        //ptr=&y;
        *ptr=200;
}

