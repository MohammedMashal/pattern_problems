#include <stdio.h>



int main()
{
    int n;
    scanf("%i",&n);
    int counter=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=counter;j++)
        {
            printf("%i ",j);
        }
        printf("\n");
        counter++;
    }
    return 0;
}
