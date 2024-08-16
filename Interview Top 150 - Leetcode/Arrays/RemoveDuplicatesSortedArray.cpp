#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&vec, int n){
    int k=0;
    for(int i=1;i<n;i++){
        if(vec[k]!=vec[i]){
            k++;
            vec[k]=vec[i];
        }
    }
    return k+1;
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
    cout<<"Output : ";
    cout<<find(vec,n);
}