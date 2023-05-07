#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    int num_of_stars=8;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=num_of_stars;j++)
        {
            printf("*");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%i*",i);
        }
        for(int j=1;j<=num_of_stars;j++)
        {
            printf("*");
        }
        printf("\n");
        num_of_stars--;
    }
    return 0;
}
