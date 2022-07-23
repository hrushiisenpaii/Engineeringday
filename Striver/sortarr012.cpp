#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


void solve(int arr[100], int n)
{
	int c0,c1,c2;
	c0=c1=c2=0;

	rep(i,0,n)
	{
		if(arr[i]==0)
		{
			c0++;
		}
		if(arr[i]==1)
		{
			c1++;
		}
		if(arr[i]==2)
		{
			c2++;
		}
	}

    rep(i,0,n)
    {
    	if(i<c0)
    	{
    		cout<<"0"<<" ";
    	}
    	else if(i<=c0 || i<c0+c1)
    	{
    		cout<<"1"<<" ";
    	}
    	else
    	{
    		cout<<"2"<<" ";
    	}
    }
  
}

int main(int argc, char const *argv[])
{   
	int n;
	cin>>n;

	int arr[n];
	rep(i,0,n)
	{
		cin>>arr[i];
	}

	solve(arr, n);

return 0;
}