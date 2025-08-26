#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the character: ";
    char cha;
    cin>>cha;
    if(cha>='a'&&cha<='z'){
        cout<<"your character is lower case!!!!";
    }
    else{
        cout<<"your character is upper case!!!!";
    }

    return 0;
}