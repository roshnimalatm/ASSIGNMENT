#include <stdio.h>
void countFrequency(int num, int freq[]) {
    unsigned int n = (num < 0) ? 0U - (unsigned int)num : (unsigned int)num;
    int digit;
    do {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    } while (n > 0);
}
int main(void) {
    int num, freq[10] = {0}, i;
    printf("Enter an integer: ");
    scanf("%d", &num);
    countFrequency(num, freq);
    printf("Digit frequencies:\n");
    for (i = 0; i < 10; i++)
        printf("%d appears %d times\n", i, freq[i]);
    return 0;
}
