#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *s = (char *)malloc(100 * sizeof(char));
    scanf("%s", s);
    
    int a, b;
    scanf("%d %d", &a, &b);
    

    for (int i = a - 1; i < b; i++) {
        printf("%c", s[i]);
    }
    
    free(s);
    return 0;
}