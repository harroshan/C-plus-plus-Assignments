#include <iostream>
#include<cmath>
using namespace std;

int findTrailingZero(int n){
    
    int zero=0, i=1;
    while(n/pow(5,i)){
        zero = zero + n/pow(5,i);
        i++;
    }
    return zero;
}

int main(){
    
    long int n;
    cin>>n;
    cout<<findTrailingZero(n);
    
    return 0;
}