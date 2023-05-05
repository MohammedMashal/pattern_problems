#include <stdio.h>

void print_hollow(int ,int );

int main()
{
    int row=0 , col=0;
    scanf("%i",&row);
    scanf("%i",&col);
    print_hollow(row,col);
    return 0;
}

void print_hollow(int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(j==0||j==(column-1))
            {
                printf("*");
            }
            else
            {
                if(i==0||i==(row-1))
                {
                    printf("*");
                }
                else
                {
                   printf(" ");
                }
            }
        }
        printf("\n");
    }
}
