#include<iostream>
#include<algorithm>
using namespace std;

void findTriplet(int a[], int n, int key){
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        int k=i+1;
        int j=n-1;
        while(k<j){
            if((a[k]+a[j]) < (key-a[i])){
                k++;
            }else if((a[k]+a[j]) > (key-a[i])){
                j--;
            } else {
                cout<<a[i]<<", "<<a[k]<<" and "<<a[j]<<endl;
                k++;
                j--;
            }
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