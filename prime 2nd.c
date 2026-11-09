
#include <stdio.h>
int main()
{
    int n,i,flag;
    printf("please enter a number:");
    scanf("%d",&n);
    if (n<2)
    {
        printf("the number is not prime");
    }
    else 
    {
        for(i=2;i<n;i++)
        {
            if (n % i ==0)
            {
                flag=1;
                break;
            }
        }
    }
    if (flag==1)
    {
        printf("not a prime number");
    }
    else
    printf("prime number");
    return 0;
}