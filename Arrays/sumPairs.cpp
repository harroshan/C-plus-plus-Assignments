#include<iostream>
#include<algorithm>
using namespace std;

void findTriplet(int a[], int n, int key){
    sort(a,a+n);
    int i=0, j=n;
    while(j>i){
        if((a[i] + a[j]) < key){
            i++;
        } else if((a[i] + a[j]) > key){
            j--;
        } else {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
    
}

int main(){
    int n;
    cin>>n;
    int a[n] = {0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    findTriplet(a, n, key);
    
    return 0;
}