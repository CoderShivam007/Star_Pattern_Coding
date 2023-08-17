#include<stdio.h>
#include<conio.h>

/*

     F
    EF
   DEF
  CDEF
 BCDEF
ABCDEF
 BCDEF +1  i-n 7-6
  CDEF +2
   DEF +3
    EF +4
     F +5

*/

int main()
{
    int n,i,j,effi=2;
    char ch;
    printf("Enter row-size: ");
    scanf("%d",&n);

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
             ch=65+n-i;
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%c",ch);
                ch++;
            }
        }

        else
        {
            ch = 65+i-n;
            for(j=1;j<=i-n;j++)
            {
                printf(" ");
            }

            for(j=1;j<=i-effi;j++)
            {
                printf("%c",ch);
                ch++;
            }
            effi=effi+2;
        }
        printf("\n");
    }
return 0;
}
