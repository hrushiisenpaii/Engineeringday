#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

void solve(int arr[100][100], int n)
{  
    // Transpose of a matrix
	rep(i,0,n)
	{
		rep(j,0,i)
		{
			swap(arr[j][i],arr[i][j]);
		}
	}

	//Reverse each row
    rep(i,0,n)
    {
    	reverse(arr[i].begin(),arr[i].end());
    }


    //Display matrix
    rep(i,0,n)
	{
		rep(j,0,n)
		{
			cout<<arr[i][j]<<" ";
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