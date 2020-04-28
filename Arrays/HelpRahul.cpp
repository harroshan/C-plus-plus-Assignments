#include<iostream>
using namespace std;

int binarySearch(int a[], int s, int e, int key){
	int m = (s+e)/2;
	if(s<=e){
		if(a[m] == key){
			return m;
		}
		if(a[s] > a[m]){
			if((a[m] < key) and (a[e] > key)){
				return binarySearch(a, m+1, e, key);
			}
		} else{
			if(a[m] > key){
				return binarySearch(a, s, m-1, key);
			} else{
				return binarySearch(a, m+1, e, key);
			}
		}
	} else{
		return -1;
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
	cout<<binarySearch(a, 0, n, key);
	return 0;
}