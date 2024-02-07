#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber;
    srand(time(0));
    randomNumber = rand() % 1000 + 1;
    while(true)
    {
        int guess;
        cout<<"Guess a number: ";
        cin>>guess;
        if(guess > randomNumber)
        {
            cout<<"Guess a smaller number!"<<endl;
            continue;
        }
        else if(guess < randomNumber)
        {
            cout<<"Guess a bigger number!"<<endl;
            continue;
        }
        else
        {
            cout<<"Congratulations, you have guessed the right number!!!"<<endl;
            break;
        }
    }
    return 0;
}