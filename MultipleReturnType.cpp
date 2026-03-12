#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
char asciiChecker(int n){
    return char(n);
}
bool toogleSwitch(bool initialState){
    return !initialState;
}

string concatenate(string str1, string str2){
    return str1 + str2;
}
int main(){
    int result = sum(5, 6);
    cout << "Sum is " << result << endl;
    char ascii = asciiChecker(65);
    cout << "ASCII character is " << ascii << endl;
    bool switchState = toogleSwitch(true);
    cout << "Toggled switch state is " << switchState << endl;
    string concatenated = concatenate("Hello ", "World!");
    cout << "Concatenated string is " << concatenated << endl;
    return 0;
}