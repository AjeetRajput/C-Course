#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "\nEnter a Number : ";
    cin >> num;

    cout << "\n";

    int sum_nTerm = 0;
    for (int i = 1; i <= num; i++){
        sum_nTerm += i;
    }

    cout << "Sum of n numbers : " << sum_nTerm << "\n\n";

    return 0;
}