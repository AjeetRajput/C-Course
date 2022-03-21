#include <iostream>
using namespace std;

int main(){
    int angle1, angle2, angle3;
    cout << "\nAngle first : ";
    cin >> angle1;

    cout << "\nAngle second : ";
    cin >> angle2;

    cout << "\nAngle third : ";
    cin >> angle3;

    int sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0){
        cout << "This is a VALID triangle!\n\n";
    }
    else{
        cout << sum;
        cout << "This is INVALID triangle!\n\n";
    }
    return 0;
}