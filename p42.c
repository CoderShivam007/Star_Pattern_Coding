#include<stdio.h>
#include<conio.h>
/*
5
54
543
5432
54321
543210
54321
5432
543
54
5

*/
int main()
{

    int n,i,j,effi;
    printf("Enter row-size: ");
    scanf("%d",&n);
    effi=n;
    for(i=1;i<=n*2+1;i++)
    {
        if(i<=n+1)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",effi);
                effi--;
            }
            effi=n;
        }

        else
        {
            for(j=1;j<=(n*2-i)+2;j++)
            {
                printf("%d",effi);
                effi--;
            }
            effi=n;
        }

        printf("\n");
    }
    return 0;
}
