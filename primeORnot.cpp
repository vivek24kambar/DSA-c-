#include<iostream>
using namespace std;
int main (){
    while(1){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            cout<<"its a prime number";
        }
        else{
            cout<<"it not an prime number";
        }
    }}

}