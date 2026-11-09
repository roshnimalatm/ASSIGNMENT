#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a[100], n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    printf("Enter array size (2 to 100): ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Please enter an array size between 2 and 100.\\n");
        return 1;
    }

    printf("Enter %d elements:\\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > secondLargest)
        {
            secondLargest = a[i];
        }

        if (a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] > smallest && a[i] < secondSmallest)
        {
            secondSmallest = a[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("There is no second distinct largest element.\\n");
    else
        printf("Second largest distinct element: %d\\n", secondLargest);

    if (secondSmallest == INT_MAX)
        printf("There is no second distinct smallest element.\\n");
    else
        printf("Second smallest distinct element: %d\\n", secondSmallest);

    return 0;
}
