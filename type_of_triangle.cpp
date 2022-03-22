#include <iostream>
using namespace std;

int main(){
    int s1, s2, s3;
    cout << "\nSide first : ";
    cin >> s1;

    cout << "\nSide second : ";
    cin >> s2;

    cout << "\nSide third : ";
    cin >> s3;

    cout << "\n";

    if(s1 == s2 && s2 == s3){
        cout << "Triangle is equilateral\n";
    } else if(s1 == s2 || s2 == s3 || s3 == s1){
        cout << "Triangle is isosceles\n";
    } else{
        cout << "Triangle is scalene\n";
    }
    return 0;
}