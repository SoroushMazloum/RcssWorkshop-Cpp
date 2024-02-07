#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    for(int i = 0 ; i < txt.size() ; i++)
    {
        int newValue = txt[i];
        if(txt[i] >= 97 && txt[i] <= 122)
        {
            newValue = txt[i] - 32;
        }
        if(txt[i] <= 96 && txt[i] >= 65)
        {
            newValue = txt[i] + 32;
        }
        txt[i] = newValue;
    }
    cout<<"Edited text: "<<txt<<endl;
    return 0;
}