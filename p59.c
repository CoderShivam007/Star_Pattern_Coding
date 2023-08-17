#include<stdio.h>
#include<conio.h>

/*

    A
   AB
  ABC
 ABCD
ABCDE

*/

int main()
{
    int n,i,j;
    char ch = 'A';
    printf("Enter row-size: ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }
return 0;
}
