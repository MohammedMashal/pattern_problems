#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    int counter=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",counter);
            if(j!=i)
            {
                printf("*");
            }
            else
            {
                printf("\n");
            }
            counter++;
        }
    }
    counter-=n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",counter);
            if(j!=i)
            {
                printf("*");
            }
            else
            {
                printf("\n");
            }
            counter++;
        }
        counter-=i;
        counter-=(i-1);
    }
    return 0;
}
