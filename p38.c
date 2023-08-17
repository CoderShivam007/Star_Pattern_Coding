#include<stdio.h>
#include<conio.h>

/*
    1
   2 2
  3   3
 4     4
5       5

*/

int main()
{
    int n,i,j,a,b;
    printf("Enter row-size: ");
    scanf("%d",&n);
    a=b=n;

    for(i=1;i<=n;i++)
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
        printf("\n");
    }

    return 0;
}
