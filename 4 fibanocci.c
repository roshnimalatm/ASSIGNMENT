
#include <stdio.h>
int main()
{
    int n, n1=0, n2=1, next,i;
    printf("enter the number of terms required:");
    scanf("%d",&n);
    if (n>=1)
    {
        printf("%d",n1);
    }
    if (n>=2)
    {
        printf("%d",n2);
    }
    
    for (i=3;i<=n;i++)
    {
      
        next= n1+n2;
        printf("%d",next);
        n1=n2;
        n2=next;
    }
    return 0;
    
}

