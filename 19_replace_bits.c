#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int first, second, mask, result;
    int position, n;
    const int bitCount = sizeof(unsigned int) * CHAR_BIT;

    printf("Enter the first unsigned integer: ");
    scanf("%u", &first);

    printf("Enter the second unsigned integer: ");
    scanf("%u", &second);

    printf("Enter starting bit position (0 is the least significant bit): ");
    scanf("%d", &position);

    printf("Enter number of bits to replace: ");
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

    mask <<= position;
    result = (first & ~mask) | ((second << position) & mask);

    printf("Result after replacing bits: %u\\n", result);
    return 0;
}
