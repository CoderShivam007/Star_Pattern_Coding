#include<conio.h>
#include<stdio.h>

/*

E       E
 D     D
  C   C
   B B
    A


*/
int main()
{
    int n,i,j,a=1,b;
    char ch;
    printf("Enter row-size: ");
    scanf("%d",&n);
    b=n*2-1;


    for(i=1;i<=n;i++)
    {
        ch=65+n-i;
        for(j=1;j<n*2;j++)
        {
            if(j==a || j==b)
            {
                printf("%c",ch);
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
