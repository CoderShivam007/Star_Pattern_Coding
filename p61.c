#include<stdio.h>
#include<conio.h>

/*

    A
   BBB
  CCCCC
 DDDDDDD
EEEEEEEEE

*/

int main()
{
    int n,i,j,effi=1;
    char ch = 'A';
    printf("Enter row-size: ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=effi;j++)
        {
            printf("%c",ch);
        }
        ch++;
        effi=effi+2;
        printf("\n");
    }
return 0;
}
