#include <iostream>
#include <string>

using namespace std;

int main(){

    int age;
    // string name;

    // cout << "Please Enter your name : " << endl;
    // cin >> name;
    // cout << "Please enter your age: " << endl;
    // cin >> age;
    
    // cout << "Hello, " << name << ". Your age is " << age << "." << endl;

    string fullName;
    
    cout << "Please enter your full name and age: " << endl;
    getline(cin, fullName);
    cin >> age;
    cout << "Hello, " << fullName << ". Your age is " << age << "." << endl;

    return 0;


}