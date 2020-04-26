#include<iostream>
using namespace std;

int factorial(int n){
    int fac=1;
    for(int i=2;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int NCR(int n, int r){
    int result = factorial(n)/(factorial(n-r)*factorial(r));
    return result;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<NCR(n,r);
    return 0;
}