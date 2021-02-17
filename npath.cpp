#include<bits/stdc++.h>
using namespace std;

int npath(int m,int n){
	if(m==1||n==1){
		return 1;
	}
	else{
		return npath(m-1,n)+npath(m,n-1);
	}
}
int main(){

 	int m,n;
 	cin>>m>>n;
	cout<<npath(m,n);
 }
