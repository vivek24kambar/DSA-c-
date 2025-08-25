#include<iostream>
using namespace std;
int main
(){
    cout<<"give the input two numbers for which you want to find minimum";
    float a,b;
    cin>>a>>b;
    //cout<<"minimum of two numbers is "<<min(a,b);
    if(a>b){
        cout<<"minimum of two numbers is "<<b;
    }
    else{
        cout<<"minimum of two numbers is "<<a;
    }
}