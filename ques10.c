#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%d",k);
                if(j<4)
                k++;
                else
                k--;
            }
            else
            {
            printf(" ");
            if(j==4)
            k--;
            }
        }
        printf("\n");
    }   
    getch();
    return 0;
}