#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *x=&a;
    int **y=&x;
    cout<<a<<endl;
    cout<<*x<<endl;
    cout<<**y<<endl;
}