#include<stdio.h>
#include<conio.h>
/*

AAAAA
BBBBB
CCCCC
DDDDD
EEEEE

*/
int main()
{
    int n,i,j;
    char c='A';

    printf("Enter row-size: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
    return 0;
}
