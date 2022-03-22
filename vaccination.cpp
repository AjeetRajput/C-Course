#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your Age"<<endl;
    cin>>age;

    if (age<18)
    {
        cout<<"Minor not eligible";
    }

    else if (18<age<60)
    {
        cout<<"Eligible for vaccination";
    }

    else{
        cout<<"Elgible for vaccination with highest priority";
    }

    
    
    

    return 0;
}