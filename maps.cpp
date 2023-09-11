// C++ map function

// Maps are part of the C++ STL (Standard Template Library).
// Maps are the associative containers that store sorted key-value pair,
// in which each key is unique and it can be inserted or deleted but cannot be altered.
// Values associated with keys can be changed.

// template < class Key,                                             // map::key_type  
//            class T,                                                     // map::mapped_type  
//            class Compare = less<Key>,                        // map::key_compare  
//            class Alloc = allocator<pair<const Key,T> >    // map::allocator_type  
//            > class map;  

#include<bits/stdc++.h>
// #include<map>
// #include <unordered_map>
using namespace std;

void print(map<int,string>&m){
    cout<<m.size()<<endl;

    // o(nlogn)
    for(auto &pr :m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    //Oderded map function  -> it means it will be in sorted order
    // map declare
    // map<int,string>m;
    // m[1] = "abc";   //O(logn)
    // m[8] = "efg";
    // m[5] = "ijk";
    // m[3] = "mno";
    // // another way to add value
    // m.insert({6,"pqr"});

    //find and erase function

    // auto it = m.find(7);  //o(logN)
    // m.erase(it);        //o(logN)
    // if(it==m.end()){
    //     cout<<"No value";
    // }
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    //printing the value of map function
//     map<int,string>::iterator it;
//     for(it = m.begin();it !=m.end();it++){
//         cout<<(*it).first<<" "<<it->second<<endl;
//     }

    // /printing using auto keyword
    // for(auto &pr :m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }

    //print function calling
    // print(m);

    // Question->
    // 1.Given N strings,Print unique strings in lexiographical order with their _Query_perf_frequency
    // N <= 10^5
    // |S| <= 100
    // map<string,int>m;
    // int n;
    // cin>>n;
    // for(int i = 0;i<n;i++){
    //     string s;
    //     cin>>s;
    //     // m[s] = m[s]+1;
    //     m[s]++;
    // }
    // for(auto &pr :m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }


    //UNORDERED_MAP IN C++ STL

    // Internally unordered_map is implemented using Hash Table, the key provided to map is hashed into indices of a hash table which is why the performance of data structure depends on the hash function a lot but on average, the cost of search, insert, and delete from the hash table is O(1). 
    
    // Declaring umap to be of 
  // <string, int> type key 
  // will be of STRING type 
  // and mapped VALUE will
  // be of int type
//   unordered_map<string, int> umap;
  
//   // inserting values by using [] operator
//   umap["Akash"] = 10;
//   umap["Kumar"] = 20;
//   umap["Laha"] = 30;
  
//   // Traversing an unordered map
//   for (auto x : umap)
//     cout << x.first << " " << 
//             x.second << endl;

// Given N strings & Q queries.
// in each query you are given a string print the frequency of that string. 

    // unordered_map<string,int>m;
    // int n;
    // cin>>n;
    // for(int i = 0;i<n;i++){
    //     string s;
    //     cin>>s;
    //     // m[s] = m[s]+1;
    //     m[s]++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     string s;
    //     cin>>s;
    //     cout<<m[s]<<endl;
    // }
}