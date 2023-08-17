#include<conio.h>
#include<stdio.h>

/*

*       *  2 3 4 5 6 7 8 9   a=1;b=10
**     **  3 4 5 6 7 8       a=1,2; b=9,10
***   ***  4 5 6 7
**** ****  5 6
*********   0

*/

int main()
{
    int i,j,n,a,b;
    printf("Enter row-size: ");
    scanf("%d",&n);
    a=1;
    b=n*2;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j<=a || j>=b)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        a++;
        b--;
        printf("\n");
    }
        return 0;
}
