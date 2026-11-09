#include <stdio.h>
#include <limits.h>
int main(void) {
    char str[100];
    int i = 0;
    long long num = 0;
    printf("Enter a positive number as a string: ");
    scanf("%99s", str);
    while (str[i] != '\\0') {
        if (str[i] < '0' || str[i] > '9') {
            printf("Invalid input.");
            return 1;
        }
        num = num * 10 + (str[i] - '0');
        if (num > INT_MAX) {
            printf("Number is too large for an integer.");
            return 1;
        }
        i++;
    }
    printf("Integer value = %lld", num);
    return 0;
}
