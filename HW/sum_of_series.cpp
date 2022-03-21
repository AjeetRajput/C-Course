#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout << "\nEnter a Number : ";
    cin >> num;

    cout << "\n";

    int sum = 0;
    for (int i = 1; i <= num; i++){
        sum = sum + pow(i,2);
    }

    cout << "Sum of the Series : " << sum << "\n\n";

    return 0;
}