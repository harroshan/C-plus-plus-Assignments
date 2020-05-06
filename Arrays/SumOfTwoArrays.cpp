#include<iostream>
using namespace std;

void sumArray(int a[], int n, int b[], int m){
    int dif = m-n;
    int c = 0;
    int s[m] = {0};
    int i=n-1;
    while(i>=0){
        s[i+dif] = a[i] + b[i+dif] + c;
        if(s[i+dif] > 9){
            s[i+dif] -= 10; 
            c = 1;
        } else {
            c = 0;
        }
        i--;
    }
    while(dif>0){
        s[dif-1] = b[dif-1] + c;
        dif--;
    }

    for(int i=0;i<m;i++){
        cout<<s[i]<<", ";
    }
	cout<<"END";
}

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
	if(n<m){
    	sumArray(a, n, b, m);
	} else {
		sumArray(b, m, a, n);
	}

    return 0;
}