#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    char n;
    printf("Enter row-size: ");
    scanf("%c",&n);

    for(i=n;i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}

