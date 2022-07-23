#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


void solve(double x, int n)
{  
   // Library funcn. 
   cout<<pow(x,n);

   // Binary Exponentiation
   double ans = 1;
   while (n != 0) {
		if (n % 2 == 0) {
			x = x * x;
			n /= 2;
		}
		else {
			ans = ans * x;
			n--;
		}
	}
	cout<<nl<<ans;
}

int main(int argc, char const *argv[])
{   
	double x;
	int n;
	cin>>x>>n;
    
    solve(x,n);

return 0;
}