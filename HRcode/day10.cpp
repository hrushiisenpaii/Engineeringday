#include<stdio.h>

int factorial(int x);

int main()
{
    int n;
    scanf("%d",&n);

    int s=factorial(n);

    printf("%d",s);
}
int factorial(int x)
{
    if(x>=1)
    return (x*factorial(x-1));
    else 
    return 1;
}
