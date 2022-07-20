#include <iostream>
using namespace std;

int main(){
    float inch, feet;
    
    do{
        cout << "Enter the number of feets: " << "\n";
        cin >> feet;
        cout << "The inches is " << feet*12 << "\n";
    }while(feet != 0);

    return 0;
}