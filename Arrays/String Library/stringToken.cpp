#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char s[] = "Today is a rainy day";

    char *ptr = strtok(s," ");
    cout<<ptr<<endl;
    //strok(s," ")  again will give the same token i.e. Today, instead following is called to catch further tokens

    while(ptr != NULL){
        ptr = strtok(NULL, " ");
        cout<<ptr<<endl;
    }

    return 0;
}