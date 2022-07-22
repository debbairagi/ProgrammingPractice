///Write a program that take input in an array 
/// also take a term that you want to find.

#include <iostream>

int main()
{
    int arr[100], i, k, term;

    std::cout << "Enter the array limit: ";
    std::cin >> k;
    for(i=1; i<=k; i++)
    {
        std::cin >> arr[i];
    }

    // for(i=1; i<=k; i++){
    //     std::cout << arr[i] << std::endl;
    // }

    std::cout << "Enter the term you want to find: ";
    std::cin >> term;

    for(i=1; i<=k ; i++)
    {
        if(arr[i] == term){
            std::cout << "The term finds in " << i << " Position." << std::endl;
            break;
        }
        
    }
    

    return 0;
}