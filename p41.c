#include<stdio.h>
#include<conio.h>
/*

    1
   2 2
  3   3
 4     4
5       5   n*2-i  10-5
 4     4
  3   3
   2 2
    1

*/
int main()
{

    int n,i,j,a,b,c,d;
    printf("Enter row-size: ");
    scanf("%d",&n);
    a=b=n;
    c=1;
    d=n*2-1;
    for(i=1;i<n*2;i++)
    {
        if(i<n)
        {
            for(j=1;j<n*2;j++)
            {
                if(j==a || j==b)
                {
                    printf("%d",i);
                }

                else
                {
                    printf(" ");
                }
            }
            a--;
            b++;
        }

        else
        {
            for(j=1;j<n*2;j++)
            {
                 if(j==c || j==d)
                {
                    printf("%d",n*2-i);
                }

                else
                {
                    printf(" ");
                }
            }
            c++;
            d--;
        }
        printf("\n");
    }
    return 0;
}
