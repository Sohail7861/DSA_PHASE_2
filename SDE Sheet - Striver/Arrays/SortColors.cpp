#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find(vector<int>&vec){
    int low=0;
    int mid=0;
    int high=vec.size()-1;
    while(mid<=high){
        if(vec[mid]==0){
            swap(vec[low++],vec[mid++]);
        }
        else if(vec[mid]==1){
            mid++;
        }
        else{
            swap(vec[mid],vec[high--]);
        }
    }
}
int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    find(vec);

    cout<<"ANS"<<endl;
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}