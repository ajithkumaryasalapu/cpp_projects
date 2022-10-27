#include<iostream>
using namespace std;

int main()
{
    int number,count=0;
    cout<<"Enter any number: ";
    cin>>number;
    for(int divider=1;number>=divider;divider++)
    {
        if(number%divider==0)
            count++;
    }
    if(count==2)
        cout<<"The given "<<number<<" is a prime number";
    else
        cout<<"The given "<<number<<" is not a prime number";
}
