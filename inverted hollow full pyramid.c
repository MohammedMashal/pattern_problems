#include <stdio.h>



int main()
{
    int n;
    scanf("%i",&n);
    int num_of_spaces=0;
    int num_of_stars=n*2-1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=num_of_spaces;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=num_of_stars;j++)
        {
            if(j==1||j==(num_of_stars)||i==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        num_of_spaces++;
        num_of_stars--;
        num_of_stars--;
    }
    return 0;
}
