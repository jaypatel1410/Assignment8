#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==5 || j==6-i || j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }   
    getch();
    return 0;
}