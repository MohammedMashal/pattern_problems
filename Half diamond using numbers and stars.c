#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",i);
            if(j!=i)
            {
                printf("*");
            }
            else
            {
                printf("\n");
            }
        }
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",i);
            if(j!=i)
            {
                printf("*");
            }
            else
            {
                printf("\n");
            }
        }
    }
    return 0;
}
