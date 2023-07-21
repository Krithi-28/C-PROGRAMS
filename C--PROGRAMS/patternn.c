#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop to generate and print the pattern
    for (int i = 1; i <= n; i++) {
        int k = i;
        // Loop to print each row of the pattern
        for (int j = 1; j <= n; j++) {
            printf("%d ", k);
            if (k == 1) {
                k = i + 1;
            }
            k--;
        }
        printf("\n");
    }

    return 0;
}
