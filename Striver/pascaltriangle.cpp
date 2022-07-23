#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


void solve(int n)
{ 
	int a[n][n];
  
  rep(i,0,n)
  { 
  	if(i==0)
  	{
  		a[i][0]=1;
  	}
  	rep(j,0,i)
  	{
       if(j==0)
       {
       	a[i][j]=1;
       }
       else if(j==i-1)
       {
       	a[i][j]=1;
       }
       else 
       {
         a[i][j]=a[i-1][j-1] + a[i-1][j];
       }
  	}
  }
   
  int k; 
   rep(i,0,n)
  { 
  //spacing
  	rep(k,0,n-i)
  	{
  		cout<<" ";
  	}
    //colomn 
  	rep(j,0,i)
  	{
  		cout<<a[i][j]<<" ";
  	}
  	cout<<nl;
  }
}

int main(int argc, char const *argv[])
{   
	int t;
	cin>>t;

	solve(t);

return 0;
}