#include<stdio.h>
#include<conio.h>

/*

    *
   * *
  *   *
 *     *
*       *

*/



int main()
  {
 printf("Enter the row size:");
  int n,i,j;
  scanf("%d",&n);
   int print_control_x=n;
       int print_control_y=n;
   for(i=1;i<=n;i++)
       {
           for(j=1;j<n*2;j++)
           {
               if(j==print_control_x||j==print_control_y)
               {
                   printf("*");
               }
               else
               {
                 printf(" ");
               }
           }
           print_control_x--;
           print_control_y++;
           printf("\n");
       }
}
