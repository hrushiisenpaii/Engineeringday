//Day 10: Binary Numbers

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)




int main(int argc, char const *argv[])
{   
	 int n;
    scanf("%d",&n);

    int  bi[10000];
    int i=0;

    while(n!=0)
    {
        int rem=n%2;
        n=n/2;
        bi[i]=rem;
        i++;
    }

    int c=0;
    int max=0;
    for(int k=0;k<i;k++)
    {
        if(bi[k]==0)
        c=0;
        else 
        c++; 
        max=c>max?c:max;
    }
      printf("%d",max);
    
  

return 0;
}