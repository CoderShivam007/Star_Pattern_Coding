#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,j,a,b,effi=1;
    printf("Enter row-size: ");
    scanf("%d",&n);

    a=b=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(j>=a && j<=b)
            {
                printf("%d",effi);
            }
            else
            {
                printf(" ");
            }
        }
        a--;
        b++;
        effi = effi+2;
        printf("\n");
    }
    return 0;
}
