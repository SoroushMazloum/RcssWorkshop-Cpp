#include <iostream>
#include <math.h>

using namespace std;

double GetSmallestNumber(double numbers[10]);

int main()
{
    double numbers[6];
    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<"Enter a number: ";
        cin>>numbers[i];
    }
    cout<<GetSmallestNumber(numbers)<<" ^ 2 = "<<pow(GetSmallestNumber(numbers), 2)<<endl;
    return 0;
}

double GetSmallestNumber(double numbers[6])
{
    double smallest = numbers[0];
    for(int i = 1 ; i < 6 ; i++)
    {
        if(smallest > numbers[i])
        {
            smallest = numbers[i];
        }
    }
    return smallest;
}
