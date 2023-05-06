#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    int num_of_spaces=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=num_of_spaces;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(i==n||j==1||j==i)
            {
                printf("%i ",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        num_of_spaces--;
    }
    return 0;
}
