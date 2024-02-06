#include <iostream>

using namespace std;

const int N = 8;

void init(char (&board)[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = '+';
        }
    }
}

void printChessboard(char (&board)[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<board[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    char chessboard[N][N];
    init(chessboard);

    int rookX, rookY;
    cout<<"Enter the coordinates of the rook (row column): ";
    cin>>rookY>>rookX;
    rookX--;
    rookY--;
    chessboard[rookX][rookY] = 'R';

    for (int i = 0; i < N; i++)
    {
        if (i != rookX)
        {
            chessboard[i][rookY] = '#';
        }
        if (i != rookY)
        {
            chessboard[rookX][i] = '#';
        }
    }

    printChessboard(chessboard);

    return 0;
}