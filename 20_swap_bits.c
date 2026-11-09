#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int a, b, mask, bitsA, bitsB, difference;
    int position, n;
    const int bitCount = sizeof(unsigned int) * CHAR_BIT;

    printf("Enter the first unsigned integer: ");
    scanf("%u", &a);

    printf("Enter the second unsigned integer: ");
    scanf("%u", &b);

    printf("Enter starting bit position (0 is the least significant bit): ");
    scanf("%d", &position);

    printf("Enter number of bits to swap: ");
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

    bitsA = (a >> position) & mask;
    bitsB = (b >> position) & mask;
    difference = bitsA ^ bitsB;

    a ^= (difference << position);
    b ^= (difference << position);

    printf("First number after swapping: %u\\n", a);
    printf("Second number after swapping: %u\\n", b);

    return 0;
}
