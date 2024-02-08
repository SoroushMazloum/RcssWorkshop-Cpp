#include <iostream>

using namespace std;

int main()
{
    srand(clock());

    int size;
    cout<<"Enter your password's size: ";
    cin>>size;
    if(size < 4 || size > 30)
    {
        cout<<"Size invalied!";
        return 0;
    }
    cout<<endl<<"Your password: ";
    for(int i = 1 ; i <= size ; i++)
    {
        char passwdChar = random() % 94 + 33;
        cout<<passwdChar;
    }
    cout<<'\n';
    return 0;
}

// 33 127