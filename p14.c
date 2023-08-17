#include<stdio.h>
#include<conio.h>
/*

     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *

*/
int main()
{
    int n,i,j,freq=0;
    printf("Enter row size: ");
    scanf("%d",&n);

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            ++freq;
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }

            for(j=1;j<=freq;j++)
            {
                printf("*");
            }
        }

        else
        {
            --freq;
            for(j=1;j<=i-n;j++)
            {
                printf(" ");
            }

            for(j=1;j<=freq;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
