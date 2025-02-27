#include<iostream>
using namespace std;

class Cdate
{
    int dd,mm,yy;
    public:
    void accept()
    {
        cout<<"accept date"<<endl;
        cin>>dd>>mm>>yy;
    }
    void display()
    {
        cout<<"display date"<<endl;
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    
    }
    void input(){
        cout<<"again input date "<<endl;
        cin>>dd>>mm>>yy;
    }
    void set(int day,int month,int year)
    {
        dd = day;
        mm = month;
        yy = year;
      
    }
    int get()
    {
        return dd,mm,yy;
    }
    
    };
    
    int main()
    {
        Cdate d1;
        d1.accept();
        d1.display();
        d1.set(14,08,2024);
        d1.display();
        cout<<"day,month,year part is"<<"\t"<<d1.get()<<endl;
        d1.input();
        d1.display();
      
        
        
    }

