#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number:");
    scanf("%d",&n);
    if((n%2)==0)
    {
        printf("the eneterd number is an even number");
    }
    else
    {
        printf("the eneterd number is an odd number");
    }
    return 0;
}