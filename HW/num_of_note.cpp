#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "\nEnter your total Amount : ";
    cin >> num;

    cout << "\n";

    while (num){
        if (num >= 2000){
            cout << "2000 note : " << num/2000 << "\n";
            num %= 2000;
        } else if (num >= 500){
            cout << "500 note : " << num/500 << "\n";
            num %= 500;
        } else if (num >= 200){
            cout << "200 note : " << num/200 << "\n";
            num %= 200;
        } else if (num >= 100){
            cout << "100 note : " << num/100 << "\n";
            num %= 100;
        } else if (num >= 50){
            cout << "50 note : " << num/50 << "\n";
            num %= 50;
        } else if (num >= 20){
            cout << "20 note : " << num/20 << "\n";
            num %= 20;
        } else if (num >= 10){
            cout << "10 note/coin : " << num/10 << "\n";
            num %= 10;
        } else if (num >= 5){
            cout << "5 note/coin : " << num/5 << "\n";
            num %= 5;
        } else if (num >= 2){
            cout << "2 coin : " << num/2 << "\n";
            num %= 2;
        } else if (num >= 1){
            cout << "1 coin : " << num/1 << "\n";
            num %= 1;
        }
        
    }
    return 0;
}