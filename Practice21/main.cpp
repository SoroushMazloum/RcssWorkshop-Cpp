#include <iostream>
#include <string>
#include <vector>

using namespace std;

double CalcAverage(vector <pair<string, double>> students)
{
    double grade = 0;
    for(pair<string, double> a : students)
    {
        grade += a.second;
    }
    return grade / students.size();
}

int main()
{
    vector <pair<string, double>> students;

    string name;
    double grade;

    while (true)
    {
        name = "";
        cout<<"Enter name: ";
        getline(cin, name);
        if(name == "0")
            break;
        cout<<"Enter his/her grade: ";
        cin>>grade;
        cin.ignore(10, '\n');
        
        pair<string, double> nAndG;
        nAndG.first = name;
        nAndG.second = grade;
        students.push_back(nAndG);
    }
    if(students.empty())
    {
        cout<<"No students"<<endl;
        return 0;
    }

    double AvrBefore = CalcAverage(students);
    for(int i = 0 ; i < students.size() ; i++)
    {
        if(students.at(i).second < 10)
        {
            cout<<students.at(i).first<<": "<<students.at(i).second<<"   >   "<<10<<endl;
            students.at(i).second = 10;
        }
    }
    cout<<"Before average: "<<AvrBefore<<endl;
    cout<<"After average: "<<CalcAverage(students);
}