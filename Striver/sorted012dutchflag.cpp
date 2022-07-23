#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


void dutchflag(int arr[100], int n)
{
  int f=0,m=0,l=n-1;

  while(m<=l)
  {
  	switch(arr[m])
  	{
       case 0:
       {
       	swap(arr[f],arr[m]);
       	f++;
       	m++;
       	break;
       }
       case 1:
       {
       	m++;
       	break;
       }
       case 2:
       {
       	swap(arr[m],arr[l]);
       	l--;       	
       	break;
       }
  	}
  }

  rep(i,0,n)
  {
  	cout<<arr[i]<<" ";
  }
  
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
	
	dutchflag(arr, t);
		
return 0;
}