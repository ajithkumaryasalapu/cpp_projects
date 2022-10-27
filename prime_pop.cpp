#include<iostream>
using namespace std;

int prime_count(int number,int count)
{
    for(int divider=1;number>=divider;divider++)
    {
        if(number%divider==0)
            count++;
    }
    return count;
}

void isprime(int number)
{
    int count=0;
    count=prime_count(number,count);
    if(count==2)
        cout<<"The given "<<number<<" is a prime number";
    else
        cout<<"The given "<<number<<" is not a prime number";
}

int main()
{
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    isprime(number);
}
