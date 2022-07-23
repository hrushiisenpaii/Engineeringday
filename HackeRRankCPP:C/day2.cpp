//Day 2: Operators



#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int main(int argc, char const *argv[])
{   
    double mealcost;
    int taxp;
    int tipp;

 scanf("%lf%d%d",&mealcost,&taxp,&tipp);

 double tip= mealcost*tipp/100;
 double tax= mealcost*taxp/100;
 int total= (int) round(mealcost+tax+tip);

  printf("%d",total); 

return 0;
}