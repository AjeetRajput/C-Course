#include <iostream>
using namespace std;

int main(){
    cout << "ENTER THE NUMBERS :-"<<endl;

    float no_1, no_2, no_3;
    cin >> no_1 >> no_2 >> no_3;


    if(no_1 >= no_2 && no_1 >= no_3){
        cout << "\n" << no_1 <<  " is greatest of all!"<<endl;
    }else if(no_2 >= no_1 && no_2 >= no_3){
        cout << "\n" << no_2 <<  " is greatest of all!"<<endl;
    }else {
        cout << "\n" << no_3 <<  " is greatest of all!"<<endl;
    }
        
    return 0;
}