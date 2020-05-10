#include<iostream>
#include<cstring>
using namespace std;

char getMax(char c[]){
    int my[256] = {0};
    int len = strlen(c), max=0;
    char rs;
    for(int i=0;i<len;i++){
        my[c[i]]++;
        if(my[c[i]] > max){
            max = my[c[i]];
            rs = c[i];
        }
    }
    return rs;
}

int main(){
    char c[1001];
    cin>>c;
    cout<<getMax(c);

    return 0;
}