
#include <stdio.h>
int main()
{
    int n,i;
    long long factorial =1;
    printf("enter the value which your want to find the factorial of:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("the factorial of %d is :%d",n,factorial);
    return 0;
}
