//Day 7: Arrays

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

    int a[10000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

return 0;
}