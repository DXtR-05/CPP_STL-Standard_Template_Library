// Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program.


// Operations of iterators :-

// 1. begin() :- This function is used to return the beginning position of the container.

// 2. end() :- This function is used to return the after end position of the container.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();
    for(it =v.begin(); it !=v.end();++it){
    cout<<(*it)<<" ";
    }
    cout<<endl;
    //pair of iterators
    // vector<pair<int,int>>v_p ={{1,2},{3,4},{5,6}};
    // vector<pair<int,int>> :: iterator it;
    // // for(it = v_p.begin(); it != v_p.end();it++){
    // //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // // }
    // for(it = v_p.begin(); it != v_p.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    //we have an another syntax for printing the data
    // (*it).first <=> (it->first)


    // short methods for iterators after c++ 11

    //Range based loops
    // for(int &value : v){
    //     value++;
    //     cout<<value<<" ";
    // }
    for(auto value : v){
        cout<<value<<" ";
    }
    // cout<<endl;

    //auto keyword in c++
    // auto a = 1;
    // // a++;
    // cout<<a<<endl;

    for(auto it = v.begin(); it != v.end(); it++){
        cout<<(*it)<<" ";
    }

}

