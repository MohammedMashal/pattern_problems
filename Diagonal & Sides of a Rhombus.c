#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==((n/2)+1)||j==((n/2)+1)||i+j==n/2+2||j-i==n/2||i-j==n/2||i+j==(n*2)-(n/2))
            // middle horizontal || middle vertical || upper left || upper right || bottom left || bottom right
            {
                printf("*");
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
