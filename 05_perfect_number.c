#include <stdio.h>
int isPerfect(int n) {
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}
int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) printf("Please enter a positive number.");
    else if (isPerfect(n)) printf("%d is a Perfect Number.", n);
    else printf("%d is not a Perfect Number.", n);
    return 0;
}
