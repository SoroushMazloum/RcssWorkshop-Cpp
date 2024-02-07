#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string text;
    char character;

    cout<<"Enter a text: ";
    getline(cin, text);

    cout<<"Enter a character: ";
    cin>>character;
        int count = 0;
    for (char c : text)
    {
        if (c == character)
        {
            count++;
        }
    }
    cout<<"The character '"<<character<<"' is repeated "<<count<<" times in the text."<<endl;

    return 0;
}