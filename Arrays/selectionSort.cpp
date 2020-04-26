#include<iostream>
using namespace std;

void selectSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int pos = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[pos]){
                pos = j;
            }
        }
        if(pos != i){
            swap(arr[i], arr[pos]);
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
    selectSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    
    return 0;
}