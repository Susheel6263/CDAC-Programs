#include<iostream>
using namespace std;class A{
	int a;
	public:
		void get()
		{
			a=100;
			cout<<a;
		}
};
int main(){
	A obj;
	obj.get();
	
}
