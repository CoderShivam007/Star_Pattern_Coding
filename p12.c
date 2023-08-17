#include<stdio.h>
#include<conio.h>

/*

    *
   ***
  *****
 *******
*********

*/
int main()
{
    int n,i,j,freq=1;
    printf("Enter row size: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=freq;j++)
        {
            printf("*");
        }
        freq = freq+2;
        printf("\n");
    }
    return 0;
}
