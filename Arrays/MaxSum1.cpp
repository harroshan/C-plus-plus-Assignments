#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[9] = {-4,1,3,-2,6,2,-1,4,-7};
    int mSum=INT_MIN;

    for(int i=0;i<9;i++){
        for(int j=i;j<9;j++){
            int csum=0;
            for(int k=i;k<=j;k++){
                csum+= arr[k];
            }
            if(csum > mSum){
                mSum=csum;
            }
            cout<<endl;
        }
    }
    cout<<mSum;

    return 0;
}