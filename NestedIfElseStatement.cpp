// Write a Program to check a number is Greater then 10 or not as well as Greater then 20 or not using Nested If Else Statement.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x>10){
        cout<<"The number is greater than 10."<<endl;
        if(x>20){
            cout<<"The number is greater than 20 and 10 also."<<endl;
        }
        else{
            cout<<"The number is not greater than 20."<<endl;
        }
    }else{
        cout<<"The number is not greater than 10 and 20."<<endl;
    }
    return 0;
}