#include<iostream>
using namespace std;
int main(){
    while(1){
    int sum,n;
    sum=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of n munbers is: "<<sum<<endl;

    }

}