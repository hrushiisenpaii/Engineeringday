//Day 17: More Exceptions

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

class Calculator{
    public:
    int power(int n,int p)
    {
        if(n<0 || p<0)
        {
           throw runtime_error("n and p should be non-negative");
        }
        else
        {
            return pow(n,p); 
         }
    }
    
};

int main(int argc, char const *argv[])
{   
   Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }

return 0;
}