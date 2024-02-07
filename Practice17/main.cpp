#include <iostream>
#include <vector>

using namespace std;

void decimalToBinary(int num)
{
    std::vector<int> binaryNum;

    if (num == 0)
    {
        binaryNum.push_back(0);
    }
    else
    {
        while (num > 0)
        {
            int remainder = num % 2;
            binaryNum.push_back(remainder);
            num /= 2;
        }
    }

    cout<<"Binary: ";
    for (int i = binaryNum.size() - 1; i >= 0; i--)
    {
        cout<<binaryNum[i];
    }
    cout<<endl;
}

int main()
{
    int number;
    cout<<"Enter a decimal number: ";
    cin>>number;

    decimalToBinary(number);

    return 0;
}