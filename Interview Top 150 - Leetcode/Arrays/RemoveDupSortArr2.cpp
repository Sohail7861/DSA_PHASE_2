#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&vec,int n){
    int k=1;
    for(int i=1;i<n;i++){
        if(k==1 || vec[i]!=vec[k-2]){
            vec[k++]=vec[i];
        } 
    }
    return k;
}

int main(){
    int n;
    cout<<"N :";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter Eles : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int ans=find(vec,n);
    cout<<"Answer is : "<<ans;
}