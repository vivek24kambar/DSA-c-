#include <iostream>
using namespace std;

int main() {
    int row=5;
    int col=5;
    
    for(int i=0; i<=row;i++){
        for(int j=1;j<=i+1;j++){
            cout<<'*';
        }
        cout<<endl;
        
    }

    return 0;
}