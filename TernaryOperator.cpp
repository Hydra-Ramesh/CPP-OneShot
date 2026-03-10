#include<iostream>
using namespace std;
int main(){
    int age=19;
    // if(age>=18){
    //     cout<<"You are a votter";
    // }else{
    //     cout<<"You are not a votter";
    // }
    //Ternary operator
    string res = (age>=18)?"Votter":"Not a votter";
    cout<<res<<endl;
    return 0;
}