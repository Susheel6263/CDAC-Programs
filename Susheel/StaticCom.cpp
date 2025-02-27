#include<iostream>
using namespace std;
class Complex{
	int r;
	int i;
	static int c;
	public:
	void accept();
	static int getCnt();
	void show(){
		cout<<"complex number is "<<r<<"+"<<i<<"i"<<"  "<<c<<endl;	
	}
};
int Complex::c=10;
	void Complex::accept(){
	cout<<"enter real and img \n";
	cin>>r>>i;
	}
int Complex::getCnt(){

		return r;
	};
int main(){
cout<<"static value is "<<Complex::getCnt();
}
