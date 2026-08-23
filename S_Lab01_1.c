#include <stdio.h>

int main(void) {
    int N, K;
    int count = 0;
    int i;
    
    scanf("%d %d", &N, &K);

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
            if (count == K) {
                printf("%d\n", i);
                break;
            }
        }
    }

    if (count < K) {
        printf("0\n");
    }

    return 0;
}