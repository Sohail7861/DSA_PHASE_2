#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&vec,int n, int val){
    int k=0;
    for(int i=0;i<n;i++){
        if(vec[i]!=val){
            vec[k++]=vec[i];
        }
    }
    return k;
    
}

int main(){
    int n;
    cout<<" N : ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter Ele's : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int val;
    cout<<"Enter Value : ";
    cin>>val;
    cout<<find(vec,n,val);
    
}