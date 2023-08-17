#include<stdio.h>
#include<conio.h>

/*

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1

*/




int main()
{
    int n,i,j,effi=1;
    printf("Enter row-size: ");
    scanf("%d",&n);
    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=n-i;j++)
            {
            printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
        }

        else
        {
            for(j=1;j<=i-n;j++)
            {
                printf(" ");
            }
            for(j=1;j<i-effi;j++) // i=6 ---------- 4 3 2 1      6 7 8 9
            {
                printf("%d ",i-effi-1);
            }
            effi=effi+2;
        }

        printf("\n");
    }
    return 0;
}
