#include<iostream>
using namespace std;
class Cdate{
	int day,month,year;
	public:
		void accept()
		{
			cout<<"accept date"<<endl;
			cin>>day>>month>>year;
		}
		void display()
		{
			cout<<"display date\n";
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		void setDay(int d)
		{
			day=d;
		}
	int	getDay()
		{
			return day;
		}
		
};
int main()
{
	Cdate d1;
	cout<<"size of object = "<<sizeof(d1)<<endl;
	cout<<"size of class cdate = "<<sizeof(class Cdate)<<endl;
	d1.accept();
	d1.display();
	d1.setDay(27);
	d1.display();

	cout<<"day part is "<<d1.getDay();
	
	

	
}

