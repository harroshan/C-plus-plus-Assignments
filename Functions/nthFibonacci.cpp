#include<iostream>
using namespace std;

int fibonacci(int n){
    
    int a=0,b=1;
    if(n==1){
        return a;
    } else if(n==2){
        return b;
    } 
    else {
        for(int i=1;i<=n-2;i++){
            int temp=b;
            b=a+b;
            a=temp;
        }
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;   
}