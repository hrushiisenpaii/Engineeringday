#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


void merge(int a1[], int a2[], int n ,int m)
{
   int a3[n+m];
   int k=0;

   rep(i,0,n)
   {
      if(a1[i]>a2[0])
      {
        int temp=a1[i];
        a1[i]=a2[0];
        a2[0]=temp;
      }

      sort(a2, a2+m);
   }

   rep(i,0,n)
{
   cout<<a1[i]<<" ";
} 
cout<<nl;
rep(i,0,m)
{
    cout<<a2[i]<<" ";
}


}

int main(int argc, char const *argv[])
{  

int n,m;
cin>>n;
cin>>m;

int a1[n];
int a2[m];
rep(i,0,n)
{
    cin>>a1[i];
} 
rep(i,0,m)
{
    cin>>a2[i];
} 

merge(a1, a2, n ,m);



	
    

return 0;
}