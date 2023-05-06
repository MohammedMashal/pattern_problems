#include <stdio.h>


int main()
{
    int n;
    scanf("%i",&n);
    char k='A';
    for(int i=1;i<=n;i++)
    {
        char j='A';
        while(j<=k)
        {
            printf("%c ",j);
            j++;
        }
        j--;
        j--;
        while(j>='A')
        {
           printf("%c ",j);
            j--;
        }
        printf("\n");
        k++;
    }
    return 0;
}
