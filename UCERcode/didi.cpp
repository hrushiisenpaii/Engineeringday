#include<bits/stdc++.h>
#include<cmath>
#include<sstream>
#include <boost/lexical_cast.hpp>  

using namespace std;
#define ll              long long
#define nl              "\n"


void solve()
{ const unsigned int M = 1000000007;
  ll n,k,m;
  cin>>n>>k>>m;

  string s;
  cin>>s;

  string temp;


  if(s[0]==0)
  	{
  		cout<<1<<nl;
  		return;
  	}
  if(s[0]==1 && k==1)
  {
  	cout<<1<<nl;
  	return;
  }

  for(int i=0;i<m;i++)
  {  temp.clear();
  	for(int j=0;j<s.size();j++)
  	{
  		
  		int p=s[j]-48;
  		int x=p*k;
  	
  		
  	string d = boost::lexical_cast<string>(x);
  		
  		
  		temp.append(d);
  		
  	}
  	s=temp;
  	
  	
  
  }

cout<<temp.size()%M<<nl;
  
}

int main(int argc, char const *argv[])
{   
	int t;
	cin>>t;

	while(t>0)
	{
		solve();
		t--;
	}

return 0;
}