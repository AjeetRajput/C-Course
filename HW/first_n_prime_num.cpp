#include <iostream>
using namespace std;

int main(){
    cout << "\nEnter range for Prime-No. :-\n\n";

    int no_a, no_z;
    cout << "From : ";
    cin >> no_a;

    cout << "To :   ";
    cin >> no_z;
    cout << "\n";
    
    for (int j = no_a = 0; j < no_z; j++){
        int i;
        for (i = 2; i < j; i++){
            if (j % i == 0){
                break;
            }
        }
        if (i == j){
            cout << j << "\n";
        }
    }
    return 0;
}