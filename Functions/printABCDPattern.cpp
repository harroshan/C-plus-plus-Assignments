#include <iostream>
using namespace std;

void printABCDPattern(int n){
    
    int row=1;
    while(row<=n){
        char ch = 'A';
        for(int i=1;i<=(n-row+1);i++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
        row++;
    }    
}

int main(){
    
    int n;
    cin>>n;
    printABCDPattern(n);
    
    return 0;
}