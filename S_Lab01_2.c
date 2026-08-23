#include <stdio.h>

int main(void) {
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    if (n < 1 || n > 100 || m < 1 || m > 3) {
        printf("INPUT ERROR!\n");
        return 0;
    }

    if (m == 1) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else if (m == 2) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i + 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else if (m == 3) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++) {        
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++) {    
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}