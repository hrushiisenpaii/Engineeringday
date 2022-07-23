//Day 25: Running Time and Complexity

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

int main(int argc, char const *argv[])
{   
	 int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        int flag=0;
        
        if(n<2)
        {cout<<"Not prime"<<endl;}
        else
        {
        for(int j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {   flag=1;
                break;
            }
            
        }
        if(flag==0)
        {cout<<"Prime"<<endl;}
        else {
        cout<<"Not prime"<<endl;
        }
    }
   
    }       
return 0;
}