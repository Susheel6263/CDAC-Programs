
#include <iostream>
using namespace std;
class A {
public:
    int sum;
    A(); 
    A(int ,int=0);
    
    void print(){ 
	cout << "Sum =" << sum << endl;
	 }
};
A::A(int a, int x)
    {
        sum =a+x;
    }
    
int main(){
    A ob(10,20);
    A ob2(5);
    ob.print();
    ob2.print();
    return 0;
}
