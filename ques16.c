#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i || j==4+i || i==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }   
    getch();
    return 0;
}