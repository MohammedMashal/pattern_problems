#include <stdio.h>

void print_solid(int ,int );

int main()
{
    int row=0 , col=0;
    scanf("%i",&row);
    scanf("%i",&col);
    print_solid(row,col);
    return 0;
}

void print_solid(int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
