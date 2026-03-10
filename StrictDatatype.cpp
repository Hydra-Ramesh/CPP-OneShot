#include<iostream>
// How to declare a constant variable in C++?
// const data_type varibale_name=value;
const float pi=3.14;
using namespace std;
int main(){
    int r=5;
    // pi=5; // This will cause a compile error since pi is declared as const   
    cout<<"Area of circle is "<<pi*r*r<<endl;
    return 0;   
}