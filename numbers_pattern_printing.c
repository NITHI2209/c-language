#include <stdio.h>

int main()
{
    int row,col;
    int i,j;
    printf("Enter the row and col\n");
    scanf("%d %d",&row,&col);
    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       {
           j%2==0?printf("0"):printf("1");
       }
       printf("\n");
    }
    return 0;
}
