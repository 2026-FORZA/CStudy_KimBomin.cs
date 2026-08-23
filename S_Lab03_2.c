#include <stdio.h>
#include <string.h>

int main(void) {
    char str[10001];
    int koi_count = 0;
    int ioi_count = 0;
    int i, len;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i <= len - 3; i++) {
        if (str[i] == 'K' && str[i+1] == 'O' && str[i+2] == 'I') {
            koi_count++;
        }
        if (str[i] == 'I' && str[i+1] == 'O' && str[i+2] == 'I') {
            ioi_count++;
        }
    }

    printf("%d\n", koi_count);
    printf("%d\n", ioi_count);

    return 0;
}