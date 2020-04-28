#include<iostream>
using namespace std;

int main(){
    int n=9;
    int arr[13] = {2,32,-11,-12,9,4,15,2,32,-11,-12,9,4};
    int csum=0, msum=0;

    for(int i=0;i<13;i++){
        csum += arr[i];
        if(csum < 0){
            csum = 0;
        }
        msum = max(csum, msum);
    }
    cout<<msum;
    return 0;
}