#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[1000];
    int n;
    cin>>n;
    cin.get();
    int max = 0;
    char a[1000];
    for(int i=0;i<n;i++){
        cin.getline(ch,1000);
        if(strlen(ch) > max){
            max = strlen(a);
            strcpy(a,ch);
        }
    }
    cout<<strlen(a)<<" "<<a<<endl;

    return 0;
}