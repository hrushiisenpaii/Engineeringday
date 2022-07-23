#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

void solve(int arr[100][100], int r, int c)
{  
   int col=1;

   rep(i,0,r)
	{   
		if(arr[i][0]== 0)
		{
			col= 0;
		}

		rep(j,1,c)
		{
			if(arr[i][j]== '0')
			{
				arr[i][0]= 0;
				arr[0][j]= 0;
			}
		}	
	}

	for(int i=r-1;i>=0;i--)
	{
		for(int j=c-1;j>=1;j--)
		{
			if(arr[i][0]== 0 || arr[0][j]== 0)
			{
				arr[i][j]= 0;
			}
			
		}
		if(col== 0)
			{
				arr[i][0]= 0;
			}
	}


}


int main(int argc, char const *argv[])
{   
	int r,c;
    
	cin>>r>>c;

    int arr[100][100];
	rep(i,0,r)
	{
		rep(j,0,c)
		{
			cin>>arr[i][j];
		}
	}

    solve(arr,r,c);

	rep(i,0,r)
	{
		rep(j,0,c)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<nl;
	}




return 0;
}