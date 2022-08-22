#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
                printf("%c",k);
                if(j<7)
                k++;
                else
                k--;
            }
            else
            {
            printf(" ");
            if(j==7)
            k--;
            }
        }
        printf("\n");
    }   
    getch();
    return 0;
}