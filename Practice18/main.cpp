#include <iostream>
#include <math.h>

using namespace std;

double dist(pair<double, double> A, pair<double, double> B)
{
    return sqrt(pow(A.first - B.first, 2) + pow(A.second - B.second, 2));
}

int main()
{
    double X1, X2, Y1, Y2;
    cout<<"Enter X1 and Y1: ";
    cin>>X1>>Y1;

    cout<<"Enter X2 and Y2: ";
    cin>>X2>>Y2;
    pair<double, double> A, B;
    A.first = X1;
    A.second = Y1;
    B.first = X2;
    B.second = Y2;
    cout<<"Distance: "<<dist(A, B)<<endl;
    
    return 0;
}