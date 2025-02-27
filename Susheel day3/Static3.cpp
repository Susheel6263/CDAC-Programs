#include<iostream>
using namespace std;
class Com{
	public:
	static int cnt;
};
int Com::cnt=5;
int main(){
	cout<<Com::cnt;
}
