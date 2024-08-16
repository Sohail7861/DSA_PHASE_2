#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(vector<vector<int>>&mat){
    int n=mat.size();
    int m=mat[0].size();
    vector<int>row(n,0),col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                mat[i][j]=0;
            }
        }
    }
}
int main(){
    int n;
    cout<<" N : ";
    cin>>n;
    int m;
    cout<<" M : ";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"Enter ele's ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    solve(matrix);
    cout<<"ANS"<<endl;
    cout << "Matrix after setting zeros:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}