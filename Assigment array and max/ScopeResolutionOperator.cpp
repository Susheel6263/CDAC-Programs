#include<iostream>
using namespace std;

class SRO{
	int x;
	public:
		void accept();
		void display();
		
};
void SRO::accept(){
	cout<<"Enter any value"<<endl;
	cin>>x;
}
void SRO::display(){
	cout<<" value = "<<x<<endl;
	
}
int main(){
  SRO d1;
 d1.accept();
 d1.display();
 
 }
