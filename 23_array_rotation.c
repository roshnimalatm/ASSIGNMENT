#include <stdio.h>

int main(void)
{
    int a[100], temp[100], n, positions, i;
    char direction;

    printf("Enter array size (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\\n");
        return 1;
    }

    printf("Enter %d elements:\\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &positions);

    printf("Enter direction (L for left, R for right): ");
    scanf(" %c", &direction);

    if (positions < 0)
    {
        printf("Number of positions cannot be negative.\\n");
        return 1;
    }

    positions %= n;

    if (direction == 'L' || direction == 'l')
    {
        for (i = 0; i < n; i++)
            temp[i] = a[(i + positions) % n];
    }
    else if (direction == 'R' || direction == 'r')
    {
        for (i = 0; i < n; i++)
            temp[(i + positions) % n] = a[i];
    }
    else
    {
        printf("Invalid direction. Enter L or R.\\n");
        return 1;
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", temp[i]);

    printf("\\n");
    return 0;
}
