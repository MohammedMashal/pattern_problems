#include <stdio.h>

void print_HalfPyramid(int);

int main()
{
    int n;
    scanf("%i",&n);
    print_HalfPyramid(n);
    return 0;
}

void print_HalfPyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
