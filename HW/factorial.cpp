#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "\nEnter a Number : ";
    cin >> num;

    int factorial = 1;
    for (int i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    cout << "\nFactorial : " << factorial << "\n";
    return 0;
}