#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    int num_of_spaces=n-1;
    int num_of_stars=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=num_of_spaces;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=num_of_stars;j++)
        {
            printf("*");
        }
        printf("\n");
        num_of_spaces--;
        num_of_stars+=2;
    }
    num_of_spaces=1;
    num_of_stars-=4;
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=num_of_spaces;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=num_of_stars;j++)
        {
            printf("*");
        }
        printf("\n");
        num_of_spaces++;
        num_of_stars-=2;
    }
    return 0;
}
