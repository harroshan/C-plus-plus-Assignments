#include<iostream>
using namespace std;

int main(){

	double num=10;
	double n=10, i=0;

	double ans = 0, inc = 1;

	while(i<=n){
		while(ans*ans <= num){
			ans =  ans+inc;
		}
		ans = ans-inc;
		inc = inc/10;

		i++;
	}
	cout<<ans<<endl;
	return 0;
}