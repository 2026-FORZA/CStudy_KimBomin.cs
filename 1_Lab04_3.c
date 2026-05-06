#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int data[100]; 

 
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", data[i]);
    }

    return 0;
}