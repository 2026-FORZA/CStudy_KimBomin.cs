#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int sum = (N + 1) * (N + 2) / 2;
    printf("%d\n", sum);

    return 0;
}