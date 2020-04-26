#include<iostream>
using namespace std;

int main(){
    int n, key;
    cin>>n;
    
    int arr[n] = {0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the key you want to find"<<endl;
    cin>>key;
    
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<<key<<" Found at : "<<i<<endl;
            break;
        }
    }
    cout<<key<<" Not Found"<<endl;
    
    return 0;
}