#include <stdio.h>
#include <ctype.h>

int main(void) {
    char text[1001];

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper((unsigned char)text[i])) {
            text[i] = tolower((unsigned char)text[i]);
        } else if (islower((unsigned char)text[i])) {
            text[i] = toupper((unsigned char)text[i]);
        }
    }

    printf("%s", text);
    return 0;
}
