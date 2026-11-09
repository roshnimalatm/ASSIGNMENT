#include <stdio.h>

int main(void)
{
    int a[100], n, target, i, j, found = 0;

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

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d:\\n", target);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((long long)a[i] + a[j] == target)
            {
                printf("(%d, %d)\\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pair found.\\n");

    return 0;
}
