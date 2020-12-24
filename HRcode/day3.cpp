#include<stdio.h>
#include<math.h>

int main()
{
double mealcost;
int taxp;
int tipp;

scanf("%lf%d%d",&mealcost,&taxp,&tipp);

double tip= mealcost*tipp/100;
double tax= mealcost*taxp/100;
int total= (int) round(mealcost+tax+tip);

printf("%d",total);
}
