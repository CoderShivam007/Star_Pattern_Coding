#include<stdio.h>
#include<conio.h>

/*

******
*****
****
***
**
*
**
***
****
*****
******

*/

int main()
{
    int n,i,j,a,b=2;
    printf("Enter Row-size: ");
    scanf("%d",&n);
    a=n;
    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=a;j++)
            {
                printf("*");
            }
            a--;
        }

        else
        {
            for(j=1;j<b;j++)
            {
                printf("*");
            }
            b++;
        }
        printf("\n");
    }

    return 0;
}
