#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    char n;
    printf("Enter row-size: ");
    scanf("%c",&n);

    for(i='A';i<=n;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}

