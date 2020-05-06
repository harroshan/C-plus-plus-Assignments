#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
            a[i][j] = a[i][j-1] + a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<", ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            a[j][i] = a[j-1][i] + a[j][i];
        }
    }

    return 0;
}