#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m=0;
    printf("\n");
    for(i=1;i<=9;i++)
    {
        i<=5?m++:m--;
        for(j=1;j<=9;j++)
        {
            if(j>=6-m && j<=4+m)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }   
    getch();
    return 0;
}