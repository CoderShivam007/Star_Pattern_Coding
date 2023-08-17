#include<stdio.h>
#include<conio.h>

/*

     A
    B B
   C C C
  D D D D
 E E E E E
F F F F F F
 E E E E E   65+ n-i+n-1 ====65+6-7+ 5 ==69  65+n+n-1-i 65+11-7
  D D D D    65+       ====65+6-8 +5==68
   C C C           ==67     65+6-9+ 5
    B B            ==66
     A             ==65

*/

int main()
{
    int n,i,j,effi;
    char ch;
    printf("Enter row-size: ");
    scanf("%d",&n);
    effi=n-1;

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            ch=65+i-1;
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%c ",ch);
            }
        }

        else
        {
             ch = 65+n*2-i-1; //65+12-7-1
             for(j=1;j<=i-n;j++)
             {
                 printf(" ");
             }

             for(j=1;j<=effi;j++)
             {
                 printf("%c ",ch);
             }
            effi--;
        }
        printf("\n");
    }
return 0;
}
