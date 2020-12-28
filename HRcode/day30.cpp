#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t-->0)
    { int n,k;
    cin>>n>>k;
    vector<int>v;
    
    for(int i=0;i<=n;i++)
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
    }
    return 0;
}