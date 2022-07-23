//Day 3: Intro to Conditional Statements

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

if(n%2==0)
{
    if(6<=n && n<=20)
    printf("Weird");
    else if(2<=n && n<=5)
    printf("Not Weird");
    if(n>20)
    printf("Not Weird");
}
else {printf("Weird");}



return 0;
}