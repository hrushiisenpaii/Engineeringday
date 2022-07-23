#include<bits/stdc++.h>
#include<cmath>
#include<vector>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int kadanealgo(vector<int> & arr, vector<int> & sa, int n)
{
   int max=arr[0];
   int sum=0;
   int end=0;

   rep(i,0,n)
   {
      sum+=arr[i];

      if(sum>max)
      {
      	sa.clear();
      	max=sum;
      	sa.push_back(end);
      	sa.push_back(i);
      }
      if (sum<0)
      {
      	sum=0;
      	end=i+1;
      }
   }

  return max;
}

int main(int argc, char const *argv[])
{   
	int n,in;
	cin>>n;

	vector<int> arr;
	vector<int> sa;

	rep(i,0,n)
	{
		cin>>in;
		arr.push_back(in);	
	}

	int ans=kadanealgo(arr, sa, n);

	cout<<ans<<nl;

	for(int i=sa[0]; i<=sa[1]; i++)
	{
		cout<<arr[i]<<" ";
	}

return 0;
}