#include <iostream>
using namespace std;

int main() {
    int row=3;
    int col=3;
    int num=1;
    for(int i=1; i<=row; i++){//vertical
        
        for(int j=1;j<=col;j++){//horizontal
            cout<<
            num<<" ";//space btw
            num++;
        }
        cout<<endl;//next after hori
        //cout<<i<<endl; 
    }
    
    return 0;
}