#include <stdio.h>

int main(void)
{
    int a[100], b[100], merged[200];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array (1 to 100): ");
    scanf("%d", &n1);
    if (n1 < 1 || n1 > 100)
    {
        printf("Invalid size.\\n");
        return 1;
    }

    printf("Enter first array in ascending order:\\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second sorted array (1 to 100): ");
    scanf("%d", &n2);
    if (n2 < 1 || n2 > 100)
    {
        printf("Invalid size.\\n");
        return 1;
    }

    printf("Enter second array in ascending order:\\n");
    for (j = 0; j < n2; j++)
        scanf("%d", &b[j]);

    i = 0;
    j = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < n1)
        merged[k++] = a[i++];

    while (j < n2)
        merged[k++] = b[j++];

    printf("Merged sorted array: ");
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);

    printf("\\n");
    return 0;
}
