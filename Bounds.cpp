#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int a[n];
    // for vector
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // int *ptr = lower_bound(a,a+n,5);
    auto it = upper_bound(a.begin(),a.end(),26);
    if(it==(a.end())){
        cout<<"not found";
        return 0;
    }
    cout<<(*it)<<endl;
}