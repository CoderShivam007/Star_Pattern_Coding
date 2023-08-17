#include<stdio.h>
#include<conio.h>

/*

1     7
12   67
123 567
1234567
123 567
12   67
1     7

*/
int main()
{
    int n,i,j,a=1,b,c,d;
    printf("Enter row-size: ");
    scanf("%d",&n);
    b=n*2-1;
    c=d=n;
  for(i=1;i<n*2;i++)
  {
       if(i<=n)
       {
           for(j=1;j<n*2;j++)
           {
               if(j<=a || j>=b)
               {
                   printf("%d",j);
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
               if(j<c || j>d)
               {
                   printf("%d",j);

               }

               else
               {
                   printf(" ");
               }
           }
           c--;
           d++;
       }
        printf("\n");
  }
    return 0;

}
