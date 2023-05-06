#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(i==1||i==n||j==i||j==n)
            {
                printf("%i ",j);
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
