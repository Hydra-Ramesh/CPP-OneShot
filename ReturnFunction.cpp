#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
string concatination(string a, string b){
    return a+" "+b;
}
int main(){
    int result = add(5,6);
    cout<<"Sum is "<<result<<endl;
    string s1="Ramesh";
    string s2="Das";
    string s3 = concatination(s1, s2);
    cout<<"Concatenated string is "<<s3<<endl;
    return 0;

}