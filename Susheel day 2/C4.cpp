#include <iostream>  
using namespace std;  
int main (){  

	 int x = 10, y = 20;  
	 const int *const ptr=&x;
	x=15;
	cout << " The value of ptr: " << *ptr << endl;  

}  
