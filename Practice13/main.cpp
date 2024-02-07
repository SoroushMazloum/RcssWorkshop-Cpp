#include <iostream>

using namespace std;

bool IsPrime(int number)
{
    bool isPrime = true;
    for(int i = 2 ; i < number ; i++)
    {
        if(number % i == 0)
            isPrime = false;
    }
    if(number == 1)
    {
        isPrime = false;
    }
    return isPrime;
}

int main()
{
    int from, to;
    cout<<"Enter the first number: ";
    cin>>from;
    cout<<"Enter the second number: ";
    cin>>to;
    for(int i = from + 1 ; i < to ; i++)
    {
        if(IsPrime(i))
        {
            cout<<i<<" is prime"<<endl;
        }
    }
    return 0;
}