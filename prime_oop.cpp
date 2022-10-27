#include<iostream>
using namespace std;

class prime
{
    public:
        int number,count=0;
        void prime_count();
        void isprime();
};

void prime::prime_count()
{
    for(int divider=1;number>=divider;divider++)
    {
        if(number%divider==0)
            count++;
    }
}

void prime::isprime()
{
    if(count==2)
        cout<<"The given "<<number<<" is a prime number";
    else
        cout<<"The given "<<number<<" is not a prime number";
}

int main()
{
    prime check;
    cout<<"Enter any number: ";
    cin>>check.number;
    check.prime_count();
    check.isprime();
}
