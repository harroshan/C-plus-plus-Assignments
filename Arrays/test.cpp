#include<iostream>
using namespace std;
void sumOfTwoArray(int arr[],int brr[],int n,int m){
    bool carry = false;
    if(n<m){
        int crr[m];
        for(int i=0;i<m;i++){
            crr[i] = brr[i];
        }
        int d = m-n;
        int j=m-1, sum=0;
        for(int i=m-1;i>=d;i--){
            sum=0;
            if(carry){
                sum = 1;
                carry = false;
            }
            sum = sum + arr[i-d] + brr[i];
            if(sum>10){
                sum = sum%10;
                carry = true;
            }
            crr[i] = sum;
            j--;
        }
        if(j>0 and carry){
            crr[j] = crr[j]+1;
        }
        for(int i=0;i<m;i++){
            cout<<crr[i]<<", ";
        }
    } else if(m<n){
        int crr[n];
        for(int i=0;i<n;i++){
            crr[i] = arr[i];
        }
        int d = n-m;
        int j=n-1, sum=0;
        for(int i=n-1;i>=d;i--){
            int sum=0;
            if(carry){
                sum = 1;
                carry = false;
            }
            sum = sum + brr[i-d] + arr[i];
            if(sum>10){
                sum = sum%10;
                carry = true;
            }
            crr[i] = sum;
            j--;
        }
        if(j>0 and carry){
            crr[j] = crr[j]+1;
        }
        for(int i=0;i<n;i++){
            cout<<crr[i]<<", ";
        }
    } else {
        int crr[n];
        for(int i=0;i<n;i++){
            crr[i] = arr[i] + brr[i];
        }
        for(int i=0;i<n;i++){
            cout<<crr[i]<<", ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n] = {0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int brr[m] = {0};
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    sumOfTwoArray(arr, brr, n, m);
    cout<<"END";

    return 0;
}