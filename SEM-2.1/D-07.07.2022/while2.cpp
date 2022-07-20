#include <iostream>
using namespace std;

int main(){
    int val, i = 1, sum = 0;
    cout << "Enter a positive integer number for val:  " << endl;
    cin >> val;
    while( i <= val){
        sum = sum + i;
        i++;
    }
    cout << "The sum from 1 to " << val << " is " << sum;

    return 0;
}