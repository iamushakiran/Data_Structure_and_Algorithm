#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;

    if(n>0)
    {
        cout<<"number is positive"<<endl;
    }
    else 
    if(n<0)
    {
        cout<<"number is negative"<<endl;
    }
    else
    {
        cout<<"number=0"<<endl;
    }
    return 0;
}