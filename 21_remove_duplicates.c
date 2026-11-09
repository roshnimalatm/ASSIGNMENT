#include <stdio.h>

int main(void)
{
    int a[100], n, i, j, k;

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

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; )
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
            }
            else
                j++;
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\\n");
    return 0;
}
