// Write a Program to Add Two Numbers
// Ex: 
// Input:
// 4
// 1 2
// 3 4
// 6 7
// 8 9
// Output:
// 3
// 7
// 13
// 17

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    return 0;
}