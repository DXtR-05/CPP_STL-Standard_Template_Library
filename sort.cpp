#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }
    // //intro sort
    // sort(arr,arr+n);
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    //sorting in vector
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //intro sort
    sort(arr.begin(),arr.end());  //o(nlogn)
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}