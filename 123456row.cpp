#include <iostream>
using namespace std;

int main() {
    int row=6;
    int col=5;
    for(int i=1; i<=row; i++){//vertical
        
        for(int j=1;j<=col;j++){//horizontal
            cout<<j<<" ";//space btw
        }
        cout<<endl;//next after hori
        //cout<<i<<endl; 
    }
    
    return 0;
}