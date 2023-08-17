#include<stdio.h>
#include<conio.h>

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
int main()
{
    int n,i,j,value=1;
    printf("Enter row-size: ");
    scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
       for(j=1;j<=i;j++)
        {
            printf("%d ",value);
            value++;
        }
        printf("\n");
  }
    return 0;

}
