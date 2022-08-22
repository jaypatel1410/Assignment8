#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
                if(j<4)
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