#include <stdio.h>

int prime(int x) {
    int i;
    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int M, N, i;
    int cnt = 0;

    scanf("%d %d", &M, &N);

    for (i = M; i <= N; i++) {
        cnt += prime(i);
    }

    printf("%d\n", cnt);

    return 0;
}