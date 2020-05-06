#include<iostream>
using namespace std;

int main(){

	int n=5;

	for(int i=1; i<=n; i++){
		int value=i-1;
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			value++;
			cout<<value;
		}
		for(int j=0;j<i-1;j++){
			value--;
			cout<<value;
		}
		cout<<endl;
	}

	return 0;
}