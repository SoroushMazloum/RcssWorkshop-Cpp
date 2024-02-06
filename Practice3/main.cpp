#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int line, circle;
    cout<<"Enter the number of linear roads: ";
    cin>>line;
    cout<<"Enter the number of circular roads: ";
    cin>>circle;
    vector <int> lineDirection, circleDirection;
    cout<<"Enter the direction of  each linear road. (1 or 0): ";
    for(int i = 0 ; i < line ; i++)
    {
        int getLn;
        cin>>getLn;
        lineDirection.push_back(getLn);
    }
    cout<<"Enter the direction of  each circular road. (1 or 0): ";
    for(int i = 0 ; i < circle ; i++)
    {
        int getCr;
        cin>>getCr;
        circleDirection.push_back(getCr);
    }
    int fromSq = 0, toSq = 0;
    for(int i = 0 ; i < line ; i++)
    {
        if(lineDirection.at(i) == 1)
        {
            fromSq++;
        }
        else
        {
            toSq++;
        }
    }
    if(fromSq != 0 && toSq != 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}