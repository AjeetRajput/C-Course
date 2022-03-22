#include <iostream>
using namespace std;

int main(){
    cout << "Enter the character : ";
    char a;
    cin >> a;

    if(a>=65 && a<=70){
        cout<< a << " is an upper case letter.";
    }
    else if(a>=97 && a<=122){
        cout<< a <<" is a lower case letter.";
    }
    else{
        cout<< a <<" is not an Alphabet.";
    }
    return 0;
}