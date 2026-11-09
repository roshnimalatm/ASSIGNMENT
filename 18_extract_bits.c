#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int number, mask, result;
    int position, n;
    const int bitCount = sizeof(unsigned int) * CHAR_BIT;

    printf("Enter an unsigned integer: ");
    scanf("%u", &number);

    printf("Enter starting bit position (0 is the least significant bit): ");
    scanf("%d", &position);

    printf("Enter number of bits to extract: ");
    scanf("%d", &n);

    if (position < 0 || n <= 0 || position >= bitCount || n > bitCount - position)
    {
        printf("Invalid bit position or number of bits.\\n");
        return 1;
    }

    if (n == bitCount)
        mask = ~0U;
    else
        mask = (1U << n) - 1U;

    result = (number >> position) & mask;

    printf("Extracted bits as a decimal number: %u\\n", result);
    return 0;
}
