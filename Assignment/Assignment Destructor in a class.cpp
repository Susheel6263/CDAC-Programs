#include <iostream>
using namespace std;
static int Count = 0;     
class Tests {
public:
 
    Tests()
    { 
        Count++;
        cout << "No. of Object created: " << Count<< endl;
    }
     ~Tests() // Destructor Created 
    { 
        cout << "No. of Object destroyed: " << Count << endl;                                  
        Count--;                                                          
    }
};
int main()
{
    Tests t1, t2, t3, t4;
}

