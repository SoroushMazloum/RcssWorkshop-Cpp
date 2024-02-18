#include <iostream>

const int N = 8;

using namespace std;

void PrintChessBoard(char board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<board[i][j]<<"  ";
        }
        cout<<"\n";
    }
}

void PlaceBishop(char board[N][N], int row, int col)
{
    board[row][col] = 'B';

    for (int i = 1; i < N; i++)
    {
        if (row + i < N && col + i < N)
        {
            board[row + i][col + i] = '#';
        }
        if (row + i < N && col - i >= 0)
        {
            board[row + i][col - i] = '#';
        }
        if (row - i >= 0 && col + i < N)
        {
            board[row - i][col + i] = '#';
        }
        if (row - i >= 0 && col - i >= 0)
        {
            board[row - i][col - i] = '#';
        }
    }
}

int main()
{
    char chessBoard[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            chessBoard[i][j] = '+';
        }
    }

    int row, col;
    cout<<"Enter the row and column for the bishop (1-8): ";
    cin>>col>>row;

    if (row < 1 || row > N || col < 1 || col > N)
    {
        cout<<"Invalid input. Please enter row and column between 0 and 8.\n";
        return 1;
    }
    
    col--;
    row--;

    PlaceBishop(chessBoard, row, col);

    PrintChessBoard(chessBoard);

    return 0;
}