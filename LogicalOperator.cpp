// We have 3 logical operators in C++ mainly used in decision making and conditional statements:
// 1. Logical AND (&&)
// 2. Logical OR (||)
// 3. Logical NOT (!)
#include<iostream>
using namespace std;
int main(){
    int x=18;
    if(x>10 && x<20){
        cout<<"x is between 10 and 20"<<endl;
    }else if(x<10 || x>20){
        cout<<"x is either less than 10 or greater than 20"<<endl;
    }
    return 0;
}