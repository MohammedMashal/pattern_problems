#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    int num_of_spaces=n-1;
    for(int i=1;i<=n;i++)
    {
        int j=1;
        for(int i=1;i<=num_of_spaces;i++)
        {
            printf(" ");
        }
        while(j<=i)
        {
            printf("%i ",j);
            j++;
        }
        j--;
        j--;
        while(j>=1)
        {
           printf("%i ",j);
            j--;
        }
        printf("\n");
        num_of_spaces--;
    }
    return 0;
}
