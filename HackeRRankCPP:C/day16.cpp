//Day 16: Exceptions - String to Integer

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

int main(int argc, char const *argv[])
{   
	string S;
    cin >> S;
    try {
    int num = stoi(S);
    cout<<num<<endl;
    }
    catch(exception)
    {
        cout<<"Bad String";
    }
    

return 0;
}