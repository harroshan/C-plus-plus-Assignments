#include<iostream>
using namespace std;

void calculate(int a[], int n, int b[], int m){
    int s[n], dif=n-m, c=0;
    for(int i=n-1;i>=dif;i--){
        int temp = a[i] + b[i-dif] + c;
        if(temp>9){
            temp = temp-10;
            c=1;
        } else {
            c=0;
        }
        s[i] = temp;
    }
    while(dif > 0){
        int temp = a[dif-1] + c;
        if(c){
            if(temp > 9){
                temp = temp-10;
                c=1;
            } else {
                c=0;
            }
            s[dif-1] = temp;
        }
        dif--;
    }
    if(c){
        cout<<c<<", ";
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<", ";
    }
    cout<<"END"<<endl;
}

int main() 
{ 
    int a[10001],b[10001];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    if(n>=m){
        calculate(a,n,b,m);
    } else {
        calculate(b,m,a,n);
    }
    return 0; 
}