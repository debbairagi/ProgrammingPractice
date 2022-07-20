#include <iostream>
using namespace std;

int main(){
    int i = 1, n, sum = 0;
    cout << "Enter the number : " << endl;
    cin >> n;
    for(i=1; i<=n ; i++){

        sum = sum + i;
    }
    cout << "The sum of 1 to " << n << " is " << sum;

    return 0;
}
