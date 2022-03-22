#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"price of shop items:";
    cin>>a;
    if(a>1000){
        a=(a-(a*0.1));
        cout<<a;
    }
    else{
        cout<<a;
    }
    return 0;
}