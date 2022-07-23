//Day 1: Data Types


#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)



int main(int argc, char const *argv[])
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";   
	
    // Declare second integer, double, and String variables.
    int j; double e; char u[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d%lf",&j,&e);
    scanf("%*[\n]%[^\n]",u);
//fgets(u,100,stdin);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",j+i);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+e);
    // Concatenate and print the String variables on a new line
//strcat(s,u);
    printf("%s",s);
    printf("%s",u);
    // The 's' variable above should be printed first.



return 0;
}