#include <iostream>  
using namespace std;  
int main()  
{  

	int y = 10, z = 20;  
	const int* ptr = &y; 
  	ptr = &z; 
  	cout << ptr<< endl; 
  	ptr=&y;
  	cout << ptr<< endl; 
	cout << " The value of ptr: " << *ptr << endl;  

}  
