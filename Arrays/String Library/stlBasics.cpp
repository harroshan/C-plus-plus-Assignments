#include<iostream>
#include<string>
using namespace std;

int main(){
    string s0;
    string s1("Hello");

    string s2 = "Hello World";
    string s3(s2);

    string s4 = s1;

    char a[] = {'a','b','c','d','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"s0 is empty string"<<endl;
    }

    s0.append("Languages C++");
    s0 += " and Java";
    cout<<s0<<endl;

    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    cout<<s0.compare(s1)<<endl; //Return an integer ==0 equal, >0 & <0 based on lexical order

    cout<<s0[2]<<endl;

    string s = "I want apple juice";
    int index = s.find("apple");
    cout<<index<<endl;

    string word = "apple";
    s.erase(index, word.length()+1);
    cout<<s<<endl;

    for(int i=0;i<s.length();i++){
        cout<<s[i]<<",";
    }
    cout<<endl;
    //Iterators
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<"*";
    }
    cout<<endl;
    //forEach loop
    for(auto c:s1){
        cout<<c<<" . ";
    }
    cout<<endl;

    return 0;
}