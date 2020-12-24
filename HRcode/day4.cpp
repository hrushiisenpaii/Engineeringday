#include<stdio.h>

int main()
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
