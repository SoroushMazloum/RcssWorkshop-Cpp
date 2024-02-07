#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }
        for (int ss = 1; ss <= i; ss++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}