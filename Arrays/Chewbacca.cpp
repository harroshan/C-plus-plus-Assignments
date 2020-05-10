#include<iostream>
#define max 100000
using namespace std;

int main(){
    char a[max];
    cin>>a;
    int i=0;
    if(a[i] == '9'){
        i++;
    }
    for(; a[i]!='\0';i++){
        int temp = a[i]-'0';
        if(temp>4){
            temp = 9-temp;
        }
        a[i] = temp + '0';
    }
    cout<<a;

    return 0;
}