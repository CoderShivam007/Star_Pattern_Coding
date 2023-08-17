#include<stdio.h>
#include<conio.h>

/*

1
1 2
3 5 8
13 21 34 55
89 144 233 377 610

*/
int main()
{
    int n,i,j,v1=0,v2=1,temp;
    printf("Enter row-size: ");
    scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
       for(j=1;j<=i;j++)
        {
            if(i==1)
            {
                printf("%d",v2);
            }

            else
            {
                printf("%d ",v1+v2);
                temp = v1 + v2;
                v1 = v2;
                v2 = temp;
            }
        }
        printf("\n");
  }
    return 0;

}
