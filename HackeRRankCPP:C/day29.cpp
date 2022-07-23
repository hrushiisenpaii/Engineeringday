//Day 29: Bitwise AND

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int main(int argc, char const *argv[])
{   
	 int t;
    cin>>t;
    
    while(t>0)
    { int n,k;
    cin>>n>>k;
    vector<int>v;
    
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
       
       int max=0;
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if((v[i]&v[j])<k && (v[i]&v[j])>max)
               {
                   max= (v[i]&v[j]);
               }
           }
           
       } 
       cout<<max<<endl;
       t--;
    }

return 0;
}