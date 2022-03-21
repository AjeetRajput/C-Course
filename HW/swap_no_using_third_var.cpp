#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"Enter the value of number 1: "<<endl;
    cin>>a;

    cout<<"Enter the value of number 2: "<<endl;
    cin>>b;

//Before Swapping

    cout<<"Before Swapping"<<endl;
    cout<<"First Number:"<<a<<endl<<"Second Number:"<<b<<endl;

//Swapping

    temp=a;
    a=b;
    b=temp;

//After Swapping

    cout<<"After Swapping"<<endl;
    cout<<"First Number:"<<a<<endl<<"Second Number:"<<b<<endl;


    return 0;
}