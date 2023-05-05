#include <stdio.h>

void print_InvertHalfPyramid(int);

int main()
{
    int n;
    scanf("%i",&n);
    print_InvertHalfPyramid(n);
    return 0;
}

void print_InvertHalfPyramid(int n)
{
    int counter=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=counter;j++)
        {
            printf("*");
        }
        printf("\n");
        counter--;
    }
}
