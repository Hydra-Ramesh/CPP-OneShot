#include<iostream>
using namespace std;
int main(){
    //All type of Data types in C++
    int a=10; //Integer data type and Hold whole numbers and take 4 bytes of memory and range is -2^31 to 2^31-1
    float b=3.14; //Float data type and take 4 bytes of memory and range is 1.5 x 10^-45 to 3.4 x 10^38 and precision is 6-7 decimal places
    double c=3.141592653589793; //Double data type and take 8 bytes of memory and range is 2.2 x 10^-308 to 1.8 x 10^308 and precision is 15-16 decimal places
    char d='A'; //Character data type and take 1 byte of memory and range is 0 to 255
    bool e=true; //Boolean data type and take 1 byte of memory and range is false to true
    string str="Hello World"; //String data type and take variable amount of memory
    long long int f=1234567890123456789; //Long long int data type and take 8 bytes of memory and range is -2^63 to 2^63-1
    cout<<"Integer: "<<a<<endl;
    cout<<"Float: "<<b<<endl;
    cout<<"Double: "<<c<<endl;
    cout<<"Character: "<<d<<endl;
    cout<<"Boolean: "<<e<<endl;
    cout<<"String: "<<str<<endl;
    cout<<"Long long int: "<<f<<endl;
    return 0;
}