// #include<iostream>
// using namespace std;

// int main(){

// 	int n;
// 	cin>>n;
// 	int row=1,value;

// 	while(row<=n){
// 		int col=1;
// 		value=row-1;

// 		while(col<row){
// 			value++;
// 			cout<<value;
// 			col++;
// 		}
// 		value++;
// 		while(col <= (2*row-1)){
// 			cout<<value;
// 			value--;
// 			col++;
// 		}

// 		cout<<endl;

// 		row++;
// 	}

// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

// 	int n=10;
// 	int i=1;

// 	while(i<=n){
// 		int col=1;
// 		int value = i;
// 		while(col<= (2*i - 1)){
// 			cout<<value<<" ";
// 			if(col<i){
// 				value++;
// 			} else if(col >= i){
// 				value--;
// 			}
// 			col++;
// 		}

// 		cout<<endl;
// 		i++;
// 	}

// 	return 0;
// }


#include<iostream>
using namespace std;

int main(){

	int n=4,j=1;

	for(int j=1; j<=n;j++){
		int value=j-1;
		for(int i=0; i<j; i++){
			value++;
			cout<<value;
		}
		for(int i=0; i<j-1; i++){
			value--;
			cout<<value;
		}
		cout<<endl;
	}

	return 0;
}