#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string text;
    cout << "Enter a text: ";
    getline(std::cin, text);

    vector<char> repeatedChars;

    for (int i = 0; i < text.length(); i++)
    {
        char currentChar = text[i];
        if (isalpha(currentChar))
        {
            bool isRepeated = false;
            for (int j = 0; j < i; j++)
            {
                if (isalpha(text[j]) && text[j] == currentChar)
                {
                    isRepeated = true;
                    break;
                }
            }

            if (isRepeated)
            {
                bool alreadyAdded = false;
                for (char c : repeatedChars)
                {
                    if (c == currentChar)
                    {
                        alreadyAdded = true;
                        break;
                    }
                }

                if (!alreadyAdded)
                {
                    repeatedChars.push_back(currentChar);
                }
            }
        }
    }

    if (repeatedChars.empty())
    {
        cout<<"No characters repeated more than once.";
    }
    else
    {
        cout<<"Characters repeated more than once: ";
        for (char c : repeatedChars)
        {
            cout<<c<<" ";
        }
    }
    cout<<endl;
    return 0;
}