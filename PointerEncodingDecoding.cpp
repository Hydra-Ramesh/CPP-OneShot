#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    int *x=&a;
    int *y=&b;
    *x=10;
    cout<<a<<endl;
    cout<<*x+*y;
    return 0;
    
}