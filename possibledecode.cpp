#include<bits/stdc++.h>
using namespace std; 


int psdecode(string s, int m) 
{
  int count=0;
  if(m==0){
        return 1;
    }
    if(s[0]=='0'){
        return 0;
    }
    if(m==1){
        return 1;
    }
  
  if(s[m-1]-'0'>0){
        count=psdecode(s,m-1);
    }
  if(s[m-2]-'0'==1||(s[m-2]-'0'==2&&s[m-1]-'0'<=6)){
        count+=psdecode(s,m-2);
    }
  return count; 
} 

int main() 
{ 
    
  string s;
  cin>>s; 
  int m=s.length(); 
  cout<<psdecode(s,m);
}
