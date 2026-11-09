#include <stdio.h>

int main(void)
{
    int a[100], result[100], n, i, k = 0;

    printf("Enter array size (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\\n");
        return 1;
    }

    printf("Enter %d integers:\\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    /* Copy negative numbers first, preserving their order. */
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
            result[k++] = a[i];
    }

    /* Copy zero and positive numbers next, preserving their order. */
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            result[k++] = a[i];
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++)
        printf("%d ", result[i]);

    printf("\\n");
    return 0;
}
