//Day 9: Recursion 3


#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int factorial(int x)
{
    if(x>=1)
    return (x*factorial(x-1));
    else 
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);

    int s=factorial(n);

    printf("%d",s);

}



