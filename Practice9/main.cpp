#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int multiplication = 1;
    int sum = 0;
    while(number >= 1)
    {
        int digit = number % 10;
        number % 10;
        number /= 10;
        sum += digit;
        multiplication *= digit;
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Multiplication: "<<multiplication<<endl;
    return 0;
}