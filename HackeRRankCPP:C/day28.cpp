//Day 28: RegEx, Patterns, and Intro to Databases

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int main(int argc, char const *argv[])
{   
	int n;
    cin>>n;
    list<string>l;
    
    while(n-->0)
    {
        string name;
        string email;
        cin>>name>>email;
        
        if(regex_match(email,regex(".+@gmail.com")))
        {
            l.push_back(name);
        }
    }
    l.sort();
    
    while(!l.empty())
    {
        cout<<l.front()<<endl;
        l.pop_front();
    }
return 0;
}