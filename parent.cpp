#include<bits/stdc++.h>
using namespace std;

int parent(int m,int i,int l,int r){
   static char s[1001];
   if(r==m) {
   	cout<<s<<" ";
   	cout<<"\n";
   }
   else {
      if(l>r) {
         s[i] = '}';
         parent(m,i+1,l,r+1);
      }
      if(l < m) {
         s[i]= '{';
         parent(m,i+1,l+1,r);
      }
   }
}

int main(){
	int m;
	cin>>m;
	parent(m,0,0,0);
	
}
