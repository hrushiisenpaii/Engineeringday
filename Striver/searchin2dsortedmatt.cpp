#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int solve(int arr[100][100], int t, int tar)
{
  rep(i,0,t)
  {
  	if(arr[i][t-1]>=tar)
  		{
  			if(arr[i][t-1]==tar || arr[i][0]==tar)
  			{
  				cout<<"True";
  				return 0;
  			}
  			else
  			{
  				rep(j,1,t-1)
  	              {
                    if(arr[i][j]==tar)
                    {
                    	cout<<"true";
                    	return 0;
                    }
    
  	              }
  	              cout<<"false";
  	              return 0;
  	      
  			}
  		}

  }
  cout<<"False";
  return 0;
}

int main(int argc, char const *argv[])
{   
	int t,tar;
	cin>>t;
    int arr[100][100];

    rep(i,0,t)
    {
    	rep(j,0,t)
    	{
    		cin>>arr[i][j];
    	}
    }

    cin>>tar;

    solve(arr, t, tar);

return 0;
}