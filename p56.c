#include<stdio.h>
#include<conio.h>

/*

A A A A A
B B B B
C C C
D D
E

*/


int main()
{
    int i,j,effi;
    char n;

    printf("Enter row-size: ");
    scanf("%c",&n);
    effi=n-65+1;
    for(i='A';i<=n;i++)
    {
        for(j=1;j<=effi;j++)
        {
            printf("%c ",i);
        }
        effi--;
        printf("\n");
    }
    return 0;
}
