// /Day 26: Nested Logic

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int main(int argc, char const *argv[])
{   
	int m1,m2,d1,d2,y1,y2;
    cin>>d1>>m1>>y1; //return date
    cin>>d2>>m2>>y2; //due date
    if(y2<y1)
    {  
        cout<<"10000";
    }
    else if(y2>y1)
    {
        cout<<"0";
    }
    else if(m2<m1)
    {
        int cost= (m1-m2)*500;
        cout<<cost;
    }
    else if(m2>m1)
    {
        cout<<"0";
    }
    else if(d2<d1)
    {
        int fine=(d1-d2)*15;
        cout<<fine;
    }
    else 
    {
        cout<<"0";
    }
     

return 0;
}