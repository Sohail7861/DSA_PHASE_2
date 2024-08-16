#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&vec,int n){
    int count=0;
    int ele;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            ele=vec[i];
        }
        else if(ele==vec[i]){
            count++;
        }
        else{
            count--;
        }
    }
    count=0;
    int x=n/2;
    for(int i=0;i<n;i++){
        if(ele==vec[i]){
            count++;
        }
    }
    if(count>x){
        return ele;
    }
    else{
        return -1;
    }
}

int main(){
    int n;
    cout<<" N : ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter Eles : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int ans=find(vec,n);
    cout<<"Majority ELE : " << ans;
}