#include<stdio.h>
#include<conio.h>
/*
     5      i=1; f=5        ======== 5-1+1
    45      i=2; f=4  n-i+1 ======== 5-2+1
   345                      ======== 5-3+1
  2345                      ======== 5-4+1
 12345                      ======== 5-5+1
012345                      5-6+1
 12345                      i-n-1 ===== 7-5-1            n*2-i+2 === 10-7+2
  2345                            ===== 8-5-                     === 10-8+2
   345                                  9-5-1
    45
     5

*/
int main()
{

    int n,i,j,freq;
    printf("Enter row-size: ");
    scanf("%d",&n);
    for(i=1;i<=n*2+1;i++)
    {
        if(i<=n+1)
        {
            freq= n-i+1;
            for(j=1;j<=n-i+1;j++)
            {
                printf(" ");
            }

            for(j=1;j<=i;j++)
            {
                printf("%d",freq);
                freq++;
            }
        }
        else
        {
            freq=i-n-1;
            for(j=1;j<=i-n-1;j++)
            {
                printf(" ");
            }
            for(j=1;j<=(n*2-i)+2;j++)
            {
                printf("%d",freq);
                freq++;
            }
        }
        printf("\n");
    }
    return 0;
}
