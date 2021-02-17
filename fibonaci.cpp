#include<bits/stdc++.h>
using namespace std;
int fib(int m){
	if(m==0||m==1){
		return m;
	}
	else{
		return fib(m-1)+fib(m-2);
	}
	
}
int main(){
	int t;
 	cin>>t;
 	int m;
 	while(t--){
 	 	cin>>m;
	  	cout<<fib(m)%10<<"\n";
	  }
 }
