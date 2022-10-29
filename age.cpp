#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter an age :";
    cin>>n;

    if(n>=1 & n<=14)
    {
        cout<<"CHILD";
    }
    else 
    if(15<=n & n<=18)
    {
        cout<<"TEEN";
    }
    else 
    if(19<=n & n<=55)
    {
        cout<<"ADULT";
    }
    else 
    if(n>55 & n<=100)
     {
        cout<<"SENIOR CITIZEN";
    }
    else 
    {
        cout<<"age is not valid";
    }
    return 0;
}