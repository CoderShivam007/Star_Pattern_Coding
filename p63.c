#include<stdio.h>
#include<conio.h>

/*

F
FE
FED
FEDC
FEDCB
FEDCBA
FEDCB
FEDC
FED
FE
F


*/

int main()
{
    int n,i,j,effi=2;
    char ch;
    printf("Enter row-size: ");
    scanf("%d",&n);
    ch = 65+n-1;

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
            {
                printf("%c",ch);
                ch--;
            }
        }

        else
        {
            for(j=1;j<=i-effi;j++)
            {
                printf("%c",ch);
                ch--;
            }
            effi=effi+2;
        }
        ch = 65+n-1;
        printf("\n");
    }
return 0;
}
