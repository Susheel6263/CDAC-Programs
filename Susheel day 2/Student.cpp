#include <iostream>  
#include<string.h>
using namespace std;  

class St{
	int rollno;
	char name[10];
	public:
		void display(int r,char* ptr)
		{
			rollno=r;
			strcpy(name,ptr);
			cout<<r<<endl;
			cout<<name;
		}
};

int main()
{
	St s1;
	s1.display(102,"Susheel");
}
