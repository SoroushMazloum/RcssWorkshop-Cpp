#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int table[n][n];
    for(int i = 0 ; i < n ; i++)
    {
        table[i][0] = i + 1; 
        table[0][i] = i + 1; 
    }
    for(int x = 0 ; x < n ; x++)
    {
        for(int y = 0 ; y < n ; y++)
        {
            table[y][x] = (x + 1) * (y + 1);
            cout << table[y][x];
            if (table[y][x] < 10)
            {
                cout << "   ";
            }
            if (table[y][x] >= 10)
            {
                cout << "  ";
            }
        }
        cout << endl<<endl;
    }
}