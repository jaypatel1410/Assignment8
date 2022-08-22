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
            if(j>=i && j<=8-i)
            {
                printf("%d",k);
                if(j<4)//j<4?k++:k--
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