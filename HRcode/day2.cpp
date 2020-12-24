#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
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

    return 0;}