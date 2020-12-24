#include <stdio.h>
#include <string.h>


int main() {
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
