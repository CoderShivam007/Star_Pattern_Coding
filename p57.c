#include<stdio.h>
#include<conio.h>

/*

E D C B A
E D C B
E D C
E D
E

*/


int main()
{
    int i,j,effi;
    char n;

    printf("Enter row-size: ");
    scanf("%c",&n);
    effi=n-65+1;
    for(i=65;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c ",j);
        }
        effi=n-65+1;
        printf("\n");
    }
    return 0;
}
