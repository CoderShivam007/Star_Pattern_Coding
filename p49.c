#include<stdio.h>
#include<conio.h>
/*

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
int main()
{
    int n,i,j;
    char c='A';

    printf("Enter row-size: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",c);
            c++;
        }
        c='A';
        printf("\n");
    }
    return 0;
}
