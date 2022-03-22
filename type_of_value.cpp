#include <iostream>
using namespace std;

int main(){
    char chr;
    cout << "\nEnter any shit : ";
    cin >> chr;
    cout << "\n";

    if((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')){
        cout << "This is an Alphabet!";
    } else if(chr >= '0' && chr <= '9'){
        cout << "This is a Digit!";
    } else{
        cout << "This is a Special Character!";
    }
    return 0;
}