#include<stdio.h>
#include<conio.h>

/*

*     *
**   **
*** ***
*******
*** ***
**   **
*     *

*/


int main()
{
    int n,i,j,a,b,c,d;
    printf("Enter Row-size: ");
    scanf("%d",&n);
     a=1;
    b=n*2-1;
    c=d=n;

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {

            for(j=1;j<n*2;j++)
            {
                if(j<=a || j>=b)  //1<=1
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
        }

        else
        {
           for(j=1;j<n*2;j++)
           {
               if(j>=c && j<=d)
               {
                   printf(" ");
               }

               else
               {
                   printf("*");
               }
           }
           c--;
           d++;
        }

        printf("\n");
    }

}


