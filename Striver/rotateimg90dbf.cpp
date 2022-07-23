#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

void solve(int arr[100][100], int n)
{  

	int dumm[100][100];
    for(int i=0;i<n;i++)
    {  
    	 for(int j=0;j<n;j++)
    	 {
           dumm[j][n-i-1]=arr[i][j];       
    	 }
    	 

    }

    rep(i,0,n)
	{
		rep(j,0,n)
		{
			cout<<dumm[i][j]<<" ";
		}
		cout<<nl;
	}

}


int main(int argc, char const *argv[])
{   
	int n;
    
	cin>>n;

    int arr[100][100];
	rep(i,0,n)
	{
		rep(j,0,n)
		{
			cin>>arr[i][j];
		}
	}

    solve(arr,n);

	




return 0;
}