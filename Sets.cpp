#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string>&s){
    for(string value : s){
        cout<<value<<endl;
    }
    for(auto it = s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}

int main(){
    //ordered sets
    // set<string>s;
    // s.insert("abc");  //o(logN)
    // s.insert("efg");
    // s.insert("ijk");

    // auto it = s.find("abc");   //o(logN)
    // if(it != s.end()){
    //     s.erase("abc");
    // }

    //by using direct value
    // s.erase("abcd");


    //unordered set
    unordered_set<string>s;
    s.insert("abc");  //o(1)
    s.insert("efg");
    s.insert("ijk");

    // auto it = s.find("abc");   //o(1)
    // if(it != s.end()){
    //     s.erase("abc");
    // }

    print(s);
}