#include<bits/stdc++.h>
using namespace std;
// pls dont thnk that  i have copied from gfg bcz iearlier i have done this so this approach comes into my mind n i framed it

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
