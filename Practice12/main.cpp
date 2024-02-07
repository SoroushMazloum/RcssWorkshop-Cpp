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
    return isPrime;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    switch (IsPrime(number))
    {
    case true:
        cout<<number<<" is prime"<<endl;
        break;
    
    default:
        cout<<number<<" is NOT prime"<<endl;
        break;
    }
}

