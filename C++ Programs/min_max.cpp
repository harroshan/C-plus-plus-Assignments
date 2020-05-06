#include<iostream>
#include<climits>
using namespace std;

int main(){

	int n;
	cin>>n;
	int min=INT_MAX, max=INT_MIN, i=0;
	int num;

	while(i<n){
		cin>>num;
		if(num < min){min = num;}
		if(num > max){max = num;}

		i++;
	}

	cout<<"MIN = "<<min<<"  MAX = "<<max<<endl;

	return 0;
}