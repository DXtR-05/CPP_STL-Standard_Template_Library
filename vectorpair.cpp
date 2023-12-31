#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<pair<int,int>>&v){
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i < v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main(){

    // Direct method
    // vector<pair<int,int>>v={{1,2},{3,4},{5,6},{7,8}};
    // printvec(v);

    //By using user input method
    vector<pair<int,int>>v;
    printvec(v);

    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;

        v.push_back({x,y});

    }

    printvec(v);


}