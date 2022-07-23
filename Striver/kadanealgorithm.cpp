#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int solve(int arr[100], int n)
{
  int sum=0,max=arr[0];
  cout<<nl;
  rep(i,0,n-1)
  { 
    rep(j,i+1,n)
    {
       sum=arr[i]+arr[j];
       if(sum>=max)
       {
        max=sum;
       }
       if(sum<max)
       {
        sum=0;
        break;
       }
    }
  }

  if(arr[n-1]>max)
  {
    max=arr[n-1];
  }
  return max;

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

  int ans=solve(arr, n); 

  cout<<ans<<nl; 

return 0;
}