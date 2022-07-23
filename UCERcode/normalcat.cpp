#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"

int main(int argc, char const *argv[])
{   
	for(int i=10;i<=999;i++)
	{
  cout<<i<<" ";

  if(i%7==0)
  {
  	cout<<i<<nl;
  }
  else if(i<14)
  {
  	cout<<14<<nl;
  }
  
  else if(i<=99)
  {
  	int r=i%7;
  	i-=r;
  	cout<<i<<nl;
  }
  else if(i>=100 && i<=104)
  {
      cout<<105<<nl;
  }
  else if(i>105)
  {
  	int r=i%7;
  	i-=r;
  	cout<<i<<nl;
  }
}


return 0;
}