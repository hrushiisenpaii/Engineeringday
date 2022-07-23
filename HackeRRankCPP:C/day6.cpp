//Day 6: Let's Review

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)



int main(int argc, char const *argv[])
{   
	int t;
    scanf("%d", &t);
    char input[10000];
    for(int i = 0; i < t; i++) {
        scanf("%s", input);

        for(int i = 0; i < strlen(input); i += 2) {
            printf("%c", input[i]);
        }
        printf(" ");
        for(int i = 1; i < strlen(input); i += 2) {
            printf("%c", input[i]);
        }
        printf("\n");
    }

return 0;
}