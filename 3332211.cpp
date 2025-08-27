/*
333
22
1


*/

#include <iostream>
using namespace std;

int main() {
    int row=3;
    int col=3;
    int num=3;

    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<num;
            
        }
        num--;
        cout<<endl;
        
    }
    return 0;
}