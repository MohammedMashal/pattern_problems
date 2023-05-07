#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    printf("*\n");
    for(int i=1;i<=n;i++)
    {
        printf("* ");
        for(int j=1;j<=i;j++)
        {
            printf("%i ",j);
        }
        printf("*\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        printf("* ");
        for(int j=1;j<=i;j++)
        {
            printf("%i ",j);
        }
        printf("*\n");
    }
    return 0;
}
