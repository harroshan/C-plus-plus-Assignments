#include<iostream>
using namespace std;

int main(){

	int num=10, i;

	for(i=2; i<= num/2; i++){
		if(num%i == 0){
			cout<<"Not Prime"<<endl;
			break;
		}
	}
	cout<<i;
	if(i==num/2+1){cout<<"Prime"<<endl;}

	return 0;
}