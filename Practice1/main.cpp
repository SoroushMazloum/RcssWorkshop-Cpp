#include <iostream>
using namespace std;

double SquareRoot(double number, double guess);

int main() 
{
    cout<<"Enter a number to calculate it's square root: ";
    double number;
    cin>>number;
    if(number <= 0)
    {
        cout<<"Number shouldn't be zero or negetive!"<<endl;
        return 0;
    }
    double firstGuess = number / 2;

    double result = SquareRoot(number, firstGuess);

    cout<<"Square root of is: "<<result<<std::endl;

    return 0;
}

double SquareRoot(double number, double guess)
{
    double new_guess = 0.5 * (guess + number / guess);
    
    if (std::abs(new_guess - guess) < 0.01) {
        return new_guess;
    } else {
        return SquareRoot(number, new_guess);
    }
}