#include<stdio.h>
#include<conio.h>

/*

EEEEEEEEE
 DDDDDDD
  CCCCC
   BBB
    A


*/

int main()
{
    int n,i,j,effi;
    char ch;
    printf("Enter row-size: ");
    scanf("%d",&n);
    effi = n*2-1;
    ch = 65+n-1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=effi;j++)
        {
            printf("%c",ch);
        }
        ch--;
        effi = effi-2;
        printf("\n");
    }
return 0;
}
