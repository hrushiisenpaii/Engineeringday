#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)



int main(int argc, char const *argv[])
{   
	int n,m;

	cin>>n;
	int a1[n];

    rep(i,0,n)
    {
    	cin>>a1[i];
    }

    cin>>m;
    int a2[m];

    rep(i,0,m)
    {
    	cin>>a2[i];
    }
    int a3[n+m];

    merge(a1, (a1 + n), a2, (a2 + m), a3);

    int k=0;

    rep(i,0,n)
    {
      a1[i]=a3[k++];
    }
    rep(i,0,m)
    {
      a2[i]=a3[k++];
    }

    rep(i,0,n)
    {
      cout<<a1[i]<<" ";
    }
    cout<<nl;
    rep(i,0,m)
    {
      cout<<a2[i]<<" ";
    }


    



return 0;
}