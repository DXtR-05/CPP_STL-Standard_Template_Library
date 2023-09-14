#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x>0;
}

int main(){
    //Lambda function
    // auto sum = [](int x,int y){return x+y;};
    // cout<<sum(2,3);

    //all of algorithm
    // vector<int> v = { -2,3,5};
    // cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
    vector<int>v = { -2,3,5};
    cout<<all_of(v.begin(),v.end(),is_positive);
    //any off algorithm
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});

    //none of algorithm
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});
}