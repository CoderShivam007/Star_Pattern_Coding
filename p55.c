#include<stdio.h>
#include<conio.h>
/*

A B C D E
A B C D
A B C
A B
A

*/
int main()
{
    int i,j;
    char n;

    printf("Enter Row-size: ");
    scanf("%c",&n);

    for(i=n;i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
