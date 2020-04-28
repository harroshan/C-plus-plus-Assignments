#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    bool round = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int j=0;
    for(int i=0;i<m;i++){
        if(round){
            j=n-1;
            for(;j>=0;j--){
                cout<<arr[j][i]<<", ";
            }
        } else {
            j=0;
            for(;j<n;j++){
                cout<<arr[j][i]<<", ";
            }
        }
        round = !round;
    }
    cout<<"END";
    return 0;
}