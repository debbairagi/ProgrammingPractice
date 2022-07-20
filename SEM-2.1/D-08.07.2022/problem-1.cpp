#include <iostream>
using namespace std;
int main()
{
    string name1, name2;
    string adm;
    int maths, english, geo;
    float average, average2;
    cout << "Enter the name of a student:\n";
    getline(cin, name1);
    cout << "Enter the Admission of a student:\n";
    cin >> adm;
    cout << "Enter marks for Maths:\n";
    cin >> maths;
    cout << "Enter marks for English:\n";
    cin >> english;
    cout << "Enter marks for Geography:\n";
    cin >> geo;
    average = (maths + english + geo) / 3;
    cout << "\n";
    cout << "average= " << average << "\n";
    cout << "Enter the name of a student:\n";
    cin >> name2;
    cout << "Enter the Admission of a student:\n";
    cin >> adm;
    cout << "Enter marks for Maths:\n";
    cin >> maths;
    cout << "Enter marks for English:\n";
    cin >> english;
    cout << "Enter marks for Geography:\n";
    cin >> geo;
    average2 = (maths + english + geo) / 3;
    cout << "\n";
    cout << "average= " << average2 << "\n";
    if (average >= average2)
    {
        cout << name1 << " is on the top.\n";
    }
    else
    {
        cout << name2 << " is the best of all";
    }
    return 0;
}