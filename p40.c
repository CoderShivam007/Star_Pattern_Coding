#include<stdio.h>
#include<conio.h>

/*
5       5
 4     4
  3   3
   2 2
    1


*/

int main()
{
    int n,i,j,a,b;
    printf("Enter row-size: ");
    scanf("%d",&n);
    a=1;
    b=n*2-1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(j==a || j==b)
            {
                printf("%d",n-i+1);
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
