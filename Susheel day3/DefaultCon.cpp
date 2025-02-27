#include <iostream>
using namespace std;
class A {
public:
    int sum ;
    A();
    A(int a,int x=0) 
    {
        sum=a+x;
    }
    void print() {
	 cout<<"Sum ="<<sum<<endl;
	  }
};
int main(){
    A ob1(10,20);
    A ob2(5);
    ob1.print();
    ob2.print();
    return 0;
}
