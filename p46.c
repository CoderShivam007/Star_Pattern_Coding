#include<stdio.h>
#include<conio.h>

/*

1
22
3 3
4  4
55555

*/
int main()
{
    int n,i,j;
    printf("Enter row-size: ");
    scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
       for(j=1;j<=i;j++)
        {
            if(i==n || i==j ||j==1)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
  }
    return 0;

}
