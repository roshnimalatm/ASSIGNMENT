#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int number;
    int position, n, i;
    const int bitCount = sizeof(unsigned int) * CHAR_BIT;

    printf("Enter an unsigned integer: ");
    scanf("%u", &number);

    printf("Enter starting bit position (0 is the least significant bit): ");
    scanf("%d", &position);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);

    if (position < 0 || n <= 0 || position >= bitCount || n > bitCount - position)
    {
        printf("Invalid bit position or number of bits. Valid positions are 0 to %d.\\n", bitCount - 1);
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        number ^= (1U << (position + i));
    }

    printf("Number after toggling bits: %u\\n", number);
    return 0;
}
