#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1001];
    gets(s);

    printf("%d", strlen(s));
   
    return 0;
}