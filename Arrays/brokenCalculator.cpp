//Factorial of big number value

#include<iostream>
#define max 100000
using namespace std;

int mul(int a[], int n, int s){
    int c=0;
    for(int i=0;i<s;i++){
        int temp = a[i]*n + c;
        a[i] = temp%10;
        c = temp/10;
    }
    while(c){
        a[s] = c%10;
        c = c/10;
        s++;
    }
    return s;
}

void factorial(int n){
    int a[max];
    a[0] = 1;
    int size = 1;
    for(int i=2;i<=n;i++){
        size = mul(a, i, size);
    }
    for(int i=size-1;i>=0;i--){
        cout<<a[i];
    }
}

int main(){
    int n;
    cin>>n;
    factorial(n);
    return 0;
}