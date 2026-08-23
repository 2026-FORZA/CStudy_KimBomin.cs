#include <stdio.h>
#include <string.h>

int main(void) {
    char str[51];
    int dash[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int sum = 0;
    int i, num, len;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        num = str[i] - '0';     
        sum += dash[num];       
    }

    printf("%d\n", sum);

    return 0;
}