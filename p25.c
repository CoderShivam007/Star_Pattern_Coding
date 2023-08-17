#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,j;
    printf("Enter row-size: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
