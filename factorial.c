#include <stdio.h>

int main() {
    int num, fact, i;

    printf("Enter a number: ");
    while(scanf("%i", &num)) {
        fact = 1;
        for (i=2; i<=num; i++) {
            fact *= i;
        }

        printf("The factorial is %i\n", fact);
        printf("Enter a number: ");
    }

    return 0;
}
