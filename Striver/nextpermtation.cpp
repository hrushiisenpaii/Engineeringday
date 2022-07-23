#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


void solve(int arr[100], int n)
{ 
  // Library func..
  next_permutation(arr,arr+n);

  rep(i,0,n)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<nl<<nl;

  //show all permutation
  sort(arr,arr+n);

  do{
  	   rep(i,0,n)
       {   
  	      cout<<arr[i]<<" ";
       }
       cout<<nl;

  }while(next_permutation(arr,arr+n));
   cout<<nl<<nl;

}
void nxtprmt(int sarr[100], int n)
{
   int k,l;

   for(k=n-2;k>=0;k--)
   {
   	if(sarr[k]<sarr[k+1])
   	{
   		break;
   	}
   }

   if(k<0)
   {
   	reverse(sarr,sarr+n);
   }
   else
   {
   	for (l=n-1;l>k;l--) 
   	{
        if (sarr[l] > sarr[k]) 
        {
            break;
        }
    } 
    	swap(sarr[k], sarr[l]);
    	reverse(sarr+k+1,sarr+n);
   }

   rep(i,0,n)
       {   
  	      cout<<sarr[i]<<" ";
       }

}

int main(int argc, char const *argv[])
{   
	int n;
	cin>>n;
	int arr[n];
    int sarr[n];

	rep(i,0,n)
	{
		cin>>arr[i];
	}
	
    copy(arr,arr+n,sarr);

	solve(arr, n);
	nxtprmt(sarr,n);

return 0;
}