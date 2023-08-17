#include<stdio.h>
#include<conio.h>

/*

    A
   BB
  CCC
 DDDD
EEEEE

*/

int main()
{
    int n,i,j;
    char ch;
    printf("Enter row-size: ");
    scanf("%d",&n);
    ch = 'A';

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }
return 0;
}
