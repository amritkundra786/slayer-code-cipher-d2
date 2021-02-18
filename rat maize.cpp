#include<bits/stdc++.h>
using namespace std;
#define MAX 100
void findPath(int i,int j,int arr[MAX][MAX],int n,string ss,vector<string> &s){
    if(i<0 or j<0 or i>=n or j>=n or arr[i][j]==0 or arr[i][j]==100 ) {
        return ;
    }else if(i==n-1 && j==n-1){
        s.push_back(ss);
        return ;
    }else{
        arr[i][j]=100;
        findPath(i+1,j,arr,n,ss+'D',s);
        findPath(i-1,j,arr,n,ss+'U',s);
        findPath(i,j+1,arr,n,ss+'R',s);
        findPath(i,j-1,arr,n,ss+'L',s);
        arr[i][j]=1;
    }
}
vector<string> printPath(int m[MAX][MAX],int n)
{   vector<string> s;
    findPath(0,0,m,n,"",s);
    sort(s.begin(),s.end());
    return s;
}
int main(){
        int n;
        cin>>n;
        int arr[MAX][MAX];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        vector<string> s;
        s=printPath(arr,n);
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }cout<<"\n";
        
}
