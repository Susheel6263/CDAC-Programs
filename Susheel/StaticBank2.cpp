#include <iostream>  
using namespace std;  
#include<string.h>
class Account {  
   public:  
       int accno;     
       char name[10];  
       static float rateOfInterest;   
       Account(int accno1,char* name1){    
             accno =accno1;    
           strcpy(name,name1);   
        }    
       void display()    
        {    
            cout<<accno<<"   "<<name<<"   "<<rateOfInterest<<endl;   
        }    
};  
float Account::rateOfInterest=6.5;  
int main() {  
    Account a1=Account(10, "Susheel"); 
    Account a2=Account(20, "Suraj");  
    a1.display();    
    a2.display();    
    return 0;  
}
