#include<bits/stdc++.h>
using namespace std;
void comb(string s, int r, int l) 
{ 
    if (l == r) 
        cout<<s<<" ";
    for (int i = l; i <= r; i++) 
        { 
            swap(s[l], s[i]); 
            comb(s,r,l+1);  
            swap(s[l], s[i]); 
        }  
} 
int main(){
	string s;
	cin>>s;
	int m= s.size();
	comb(s,m-1,0);
}
