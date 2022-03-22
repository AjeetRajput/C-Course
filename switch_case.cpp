#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "\nEnter your Number : ";
    cin >> num;

    cout << "\n";

    switch (num)
    {
    case 0:
        cout << "Student opted course 'OS'.\n";
        break;
    case 1:
        cout << "Student opted course 'DBMS'.\n";
        break;
    case 2: 
        cout << "Student opted course 'OOPS'.\n";
        break;
    case 3:
        cout << "Student opted course 'DSA'.\n";
        break;
    default:
        cout << "Tumse na ho payega!\n\n";
        break;
    }
    return 0;
}