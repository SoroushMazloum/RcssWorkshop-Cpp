#include <iostream>
#include <cmath>

using namespace std;

bool IsThreatened(int, int, int, int);

int main()
{
    int rookX, rookY, pawnX, pawnY;

    cout<<"Enter the coordinates of the rook (X, Y): ";
    cin>>rookX>>rookY;

    cout<<"Enter the coordinates of the pawn (X, Y): ";
    cin>>pawnX>>pawnY;

    if (IsThreatened(rookX, rookY, pawnX, pawnY))
    {
        cout<<"The pawn is threatened by the rook."<<endl;
    }
    else
    {
        cout<<"The pawn is not threatened by the rook."<<endl;
    }

    return 0;
}

bool IsThreatened(int rookX, int rookY, int pawnX, int pawnY)
{
    return (rookX == pawnX || rookY == pawnY);
}