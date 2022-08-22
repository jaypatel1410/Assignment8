#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",k);
                if(j<5)
                k++;
                else
                k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }   
    getch();
    return 0;
}