#include <stdio.h>
int main(void) {
    int num, i = 0, j = 0;
    unsigned int n;
    char str[12], temp[12];
    printf("Enter an integer: ");
    scanf("%d", &num);
    n = (num < 0) ? 0U - (unsigned int)num : (unsigned int)num;
    do {
        temp[i++] = (n % 10) + '0';
        n /= 10;
    } while (n > 0);
    if (num < 0) str[j++] = '-';
    while (i > 0) str[j++] = temp[--i];
    str[j] = '\\0';
    printf("String representation: %s", str);
    return 0;
}
