#include <stdio.h>
int main(void) {
    unsigned long long num;
    int base, i = 0, j;
    char result[65], digits[] = "0123456789ABCDEF";
    printf("Enter a decimal number: ");
    scanf("%llu", &num);
    printf("Enter target base (2-16): ");
    scanf("%d", &base);
    if (base < 2 || base > 16) {
        printf("Invalid base.");
        return 1;
    }
    if (num == 0) result[i++] = '0';
    while (num > 0) {
        result[i++] = digits[num % base];
        num /= base;
    }
    printf("Converted number: ");
    for (j = i - 1; j >= 0; j--) printf("%c", result[j]);
    return 0;
}
