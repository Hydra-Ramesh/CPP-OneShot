#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=3;
    cout<<"x+y="<<x+y<<endl; // Binary + operator
    cout<<"x-y="<<x-y<<endl; // Binary - operator
    cout<<"x*y="<<x*y<<endl; // Binary * operator
    cout<<"x/y="<<x/y<<endl; // Binary / operator (integer division)
    cout<<"x%y="<<x%y<<endl; // Binary % operator (modulo operator, gives the remainder of the division)
    int z=10;
    z++; // Unary Post Increment Operator
    cout<<"z="<<z<<endl; // z is now 11
    z--; // Unary Post Decrement Operator
    cout<<"z="<<z<<endl; // z is now 10 again
    ++z; // Unary Pre Increment Operator
    cout<<"z="<<z<<endl; // z is now 11
    --z; // Unary Pre Decrement Operator
    cout<<"z="<<z<<endl; // z is now 10 again
}