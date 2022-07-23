#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


void solve()
{
  int n,x,posi,posj,temp,sum1=0;
  cin>>n;

  int arr[n];

  rep(i,0,n)
  {
    cin>> x;
    arr[i]=abs(x);
  }

  rep(i,0,n)
  {
    if(i%2==0)
    {
      sum1+=arr[i];  
    }
    else
    {
      sum1-=arr[i]; 
    }
  }


  int max=0;
  int min=99999;
  
  rep(i,0,n)
  {  
    if(i%2==0)
    {
      if(arr[i]<min)
      {
        min=arr[i];
        posi=i;
      }
    }
    else
    {
      if(arr[i]>max)
      {
        max=arr[i];
        posj=i;
      }
    }
  }

  temp=arr[posi];
  arr[posi]=arr[posj];
  arr[posj]=temp;

  int sum=0;

  rep(i,0,n)
  {
    if(i%2==0)
    {
      sum+=arr[i];  
    }
    else
    {
      sum-=arr[i]; 
    }
  }

  cout<<(sum1<sum? sum : sum1)<<nl;

}

int main(int argc, char const *argv[])
{   
  int t;
  cin>>t;

  while(t>0)
  {
    solve();
    t--;
  }

return 0;
}