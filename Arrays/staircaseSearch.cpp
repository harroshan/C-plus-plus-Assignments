#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int key = 10;

    int i=0, j=m-1;
    bool s = false;
    while(i<n and j>=0){
        if(a[i][j] == key){
            s = true;
            cout<<i<<" , "<<j; 
            break;
        }else if(a[i][j] > key){
            cout<<a[i][j]<<"  "<<j<<" is decreasing"<<endl;
            j--;
        } else if(a[i][j] < key){
            cout<<i<<" is increasing"<<endl;
            i++;
        }
    }
    if(!s){
        cout<<"Not found";
    }

    return 0;
}