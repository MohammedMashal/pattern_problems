#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    int num_of_spaces=1;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(int j=1;j<=num_of_spaces;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        num_of_spaces+=2;
    }
    num_of_spaces-=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(int j=1;j<=num_of_spaces;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        num_of_spaces-=2;
    }
    return 0;
}
