#include <iostream>
#include <string>
using namespace std;

int main()
{
    string rowA, rowB;
    cin>>rowA>>rowB;
    int counter = 0;
    for(int i = 0 ; i < 8 ; i ++)
    {
        if(rowA[i] == rowB[i] && rowA[i] == '1')
        {
            counter ++;
        }
    }
    cout<<counter<<endl;
    return 0;
}