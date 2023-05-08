#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    int counter=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=counter;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==n||i==1||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        counter--;
    }
    return 0;
}
