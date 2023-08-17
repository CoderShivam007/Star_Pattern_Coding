#include<stdio.h>
#include<conio.h>

/*

    1
   321
  54321
 7654321
987654321

*/




int main()
{
    int n,i,j,effi=1;
    printf("Enter row-size: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=effi;j>=1;j--)
        {
            printf("%d",j);
        }
        effi= effi+2;
        printf("\n");
    }
    return 0;
}
