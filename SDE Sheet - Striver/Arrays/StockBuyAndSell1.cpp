#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&vec,int n){
    int ans=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,vec[i]);
        ans=max(ans,vec[i]-mini);
    }
    if(ans<0){
        return 0;
    }
    return ans;
}

int main(){
    int n;
    cout<<"N:";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter eles : ";;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int ans=find(vec,n);
    cout<<endl<<"ANS:"<<ans;
}