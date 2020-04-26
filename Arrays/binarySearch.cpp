#include<iostream>
using namespace std;

int binarySearch(int arr[],int s, int e, int key){
    if(s <= e){
        int m = (s+e)/2;
        if(arr[m] == key){
            return m;
        } else if(arr[m] > key){
            return binarySearch(arr, s, m-1, key);
        } else {
            return binarySearch(arr, m+1, e, key);
        }
    } else {
        return -1;
    }
}

int main(){

    int arr[10] = {1,2,12,22,53,54,65,76,132,423};
    int key;
    cin>>key;
    int pos = binarySearch(arr, 0, 9, key);
    if(pos != -1){
        cout<<key<<" found at : "<<pos;
    } else{
        cout<<key<<" not found";
    }
    return 0;
}