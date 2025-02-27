#include <iostream>
using namespace std;

int num(int x,int y,int z =5,int w=10) {
    return (x + y + z + w);
}
int main(){
    cout<<sum(10, 87) <<endl;
    cout<<sum(45, 678, 45)<<endl;
    cout<<sum(36, 10, 23,30)<<endl;
}
