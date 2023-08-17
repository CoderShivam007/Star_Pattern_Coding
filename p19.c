#include<stdio.h>
#include<conio.h>

/*

*
**
* *
*  *
*****

*/

int main()
{
    int n,i,j,effi=1;
    printf("Enter Row-size: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n || j==effi || j==1)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        effi++;
        printf("\n");
    }
    return 0;
}
