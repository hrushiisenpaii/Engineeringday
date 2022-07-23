#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int stockbuysell(int arr[100], int t)
{
    int maxp=0;
    int minp=10;

    rep(i,0,t)
    {
       minp= min(minp, arr[i]);
       
       maxp= max(maxp, arr[i]-minp);
    }

cout<<maxp<<nl;
return 0;

}

int main(int argc, char const *argv[])
{   
	int t;
	cin>>t;

	int arr[t];
	rep(i,0,t)
	{
		cin>>arr[i];
	}

	stockbuysell(arr, t);

	return 0;
}