#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void sorts(vector<int>&nums1, vector<int>&nums2, int m, int n){
    int index=m+n-1;
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[index--]=nums1[i--];
            }
            else{
                nums1[index--]=nums2[j--];
            }
        }
        while(i>=0){
           
                nums1[index--]=nums1[i--];
            
        }
        while(j>=0){
            
                nums1[index--]=nums2[j--];
            
        }

    
}





int main(){
    int m;
    cout<<"M: ";
    cin>>m;
    int n;
    cout<<"N: ";
    cin>>n;
    vector<int>arr1(m+n);
    cout<<"ENTER ARR1 ELES : ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(n);
    cout<<"ENTER ARR2 ELES : ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sorts(arr1,arr2,m,n);
    
    for(int x:arr1){
        cout<<x<<" ";
    }
    return 0;
    
    
}