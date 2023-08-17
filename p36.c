#include<stdio.h>
#include<conio.h>

/*

5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1

*/




int main()
{
    int n,i,j;
    printf("Enter row-size: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d ",n-i+1);
        }
        printf("\n");
    }
    return 0;
}
