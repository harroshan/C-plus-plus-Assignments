#include<iostream>
using namespace std;

int main(){
	
	int f_temp=0;
	int c_temp;
	while(f_temp<=300){
		c_temp = (5*(f_temp - 32))/9;

		cout<<f_temp<<"    "<<c_temp<<endl;

		f_temp = f_temp + 20;
	}

	return 0;
}