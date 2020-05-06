#include<iostream>
using namespace std;

void readline(char a[], int max, char delim){
    int i=0;
    char ch = cin.get();
    while((i<max) && (ch != delim)){
        a[i] = ch;
        i++;
        ch=cin.get();
    }
    a[i] = '\0';
}

int main(){
    char a[1000];
    // readline(a, 100, '%');
    cin.getline(a, 100, '%');
    cout<<a;

    return 0;
}
