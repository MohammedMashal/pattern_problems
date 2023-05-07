#include <stdio.h>


int main()
{
    int num;
    scanf("%i",&num);
    int n;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",num);
        }
        num++;
        printf("\n");
    }
    num-=2;
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",num);
        }
        num--;
        printf("\n");
    }
    return 0;
}
