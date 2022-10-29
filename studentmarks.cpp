#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<< "enter your marks :";
    cin>> n;

    if(n<35)
    {
        cout<<"FAIL";
    }

    if(n>=35 & n<50)
    {
        cout<<"WORK HARD";
    }

    if(n>=50 & n<60)
    {
        cout<<"BELOW AVERAGE";
    }

    if(n>=60 & n<70)
    {
        cout<<"AVERAGE";
    }

    if(n>=70 & n<80)
    {
        cout<<"GOOD";
    }

    if(n>=80 & n<90)
    {
        cout<<"VERY GOOD";
    }

    if(n>=90 & n<100)
    {
        cout<<"EXCELLENT";
    }

    if(n>100)
    {
        cout<<"NOT VALID";
    }

    return 0;
}