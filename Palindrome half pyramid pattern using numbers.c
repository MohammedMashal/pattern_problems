#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        int j=1;
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
    }
    return 0;
}
