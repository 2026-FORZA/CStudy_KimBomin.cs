#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int ones = b % 10;
    int tens = (b / 10) % 10;
    int hundreds = b / 100;

    printf("%d\n", a * ones);       
    printf("%d\n", a * tens);      
    printf("%d\n", a * hundreds);   
    printf("%d\n", a * b);          

    return 0;
}