#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find(vector<int>&vec){
    int n=vec.size();
    int breakpoint=-1;
    for(int i=n-2;i>=0;i--){
        if(vec[i]<vec[i+1]){
            breakpoint=i;
            break;
        }
    }
    if(breakpoint==-1){
        reverse(vec.begin(),vec.end());
        return;
    }
    for(int i=n-1;i>breakpoint;i--){
        if(vec[i]>vec[breakpoint]){
            swap(vec[i],vec[breakpoint]);
            break;
        }
    }
    reverse(vec.begin()+breakpoint+1,vec.end());
}

int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter eles: ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    find(vec);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}