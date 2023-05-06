#include <stdio.h>



int main()
{
    int n;
    scanf("%i",&n);
    int num_of_spaces=n-1;
    int num_of_nums=1;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=num_of_spaces;j++)
        {
            printf(" ");
        }
        j=i;
        while(j<=2*i-1)
        {
            printf("%i ",j);
            j++;
        }
        j--;
        j--;
        while(j>=i)
        {
            printf("%i ",j);
            j--;
        }
        printf("\n");
        num_of_spaces--;
        num_of_nums++;
        num_of_nums++;
    }
    return 0;
}
