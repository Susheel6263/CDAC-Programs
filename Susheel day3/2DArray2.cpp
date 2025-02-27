#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int i,j;
    cout<<"Insert Values"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            cin>>*(*(a+i)+j);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            cout<<*(*(a+i)+j)<<"\t";
        }
        cout<<"\n";
    }
    
}
