#include<iostream>
using namespace std;

int main(){
    int positive=0, negative=0, arr[10],i;
    cout<<"enter 10 elements: "<<endl;
    for (i=0;i<10;i++){
        cin>>arr[i];

    }
    for (i=0;i<10;i++){
        if (arr[i]<0){
            negative++;
        }
        else {
            positive++;

        } 
    }
    cout<<"positive number: "<<positive<<endl;
    cout<<"negative numbers: "<<negative<<endl;
    return 0;
}