#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int main(int argc, char const *argv[])
{   
	int n,a;
  int x[100000000];

  cin>>n>>a;

  rep(i,0,n)
  {
    cin>>x[i];
  }

  int sum=0;
  int p;
  
  rep(i,0,n)
  {
    rep(j,i+1,n)
    {
      p=x[i]+x[j];
      if(p>sum)
      {
        sum=p;
      }
    }
  }

  cout<<sum;

return 0;
}