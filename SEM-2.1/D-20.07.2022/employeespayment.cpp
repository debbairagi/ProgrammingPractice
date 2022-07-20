#include <iostream>
using namespace std;

int main(){
    float hours, wageHourly, grossPay;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the Hourly wages : ";
    cin >> wageHourly;

    cout << "Employees gross payment is : " << hours * wageHourly << "\n";
    return 0;
}