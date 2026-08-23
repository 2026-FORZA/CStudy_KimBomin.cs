#include <stdio.h>

int main(void) {
    int K;
    int dir, dist;
    int x[7], y[7];
    int i;
    long long sum = 0;

    scanf("%d", &K);

    x[0] = 0;
    y[0] = 0;

    for (i = 1; i <= 6; i++) {
        scanf("%d %d", &dir, &dist);
        x[i] = x[i-1];
        y[i] = y[i-1];

        if (dir == 1) x[i] += dist;       
        else if (dir == 2) x[i] -= dist;  
        else if (dir == 3) y[i] -= dist;  
        else if (dir == 4) y[i] += dist;  
    }

    for (i = 0; i < 6; i++) {
        sum += (long long)x[i] * y[i+1] - (long long)x[i+1] * y[i];
    }
    if (sum < 0) sum = -sum;
    sum = sum / 2;

    printf("%lld\n", sum * K);

    return 0;
}