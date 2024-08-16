#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&vec,int n){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=vec[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter EleS : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int ans=find(vec,n);
    cout<<" ANS : "<<ans;
}