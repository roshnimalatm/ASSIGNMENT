#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main(void) {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) printf("Please enter positive integers.");
    else printf("GCD = %d", gcd(a, b));
    return 0;
}
