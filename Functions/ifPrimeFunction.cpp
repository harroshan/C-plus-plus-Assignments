#include<iostream>
#include<cmath>
using namespace std;

bool ifPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void printPrimes(int N){  
    for(int i=2;i<=N;i++){
        if(ifPrime(i)){
            cout<<i<<" is Prime"<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    printPrimes(n);
    return 0;
}