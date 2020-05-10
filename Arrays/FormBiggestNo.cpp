#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compare(int a, int b){
    string x = to_string(a).append(to_string(b));
    string y = to_string(b).append(to_string(a));

    return x.compare(y) > 0 ? 1 : 0;
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n, compare);
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
        t--;
    }

    return 0;
}