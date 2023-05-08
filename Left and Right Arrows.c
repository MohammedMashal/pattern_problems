#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    for(int i=1;i<=n;i++) //Right arrow
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1||j-i==n/2||i+j==n+n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n---------------------------\n\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1||i+j==n/2+2||i-j==n/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
