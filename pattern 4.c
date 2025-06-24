#include <stdio.h>

int main()
{
    int row,col;
    int i,j,value=1;
    printf("Enter the row\n");
    scanf("%d",&row);
    printf("Enter the col\n");
    scanf("%d",&col);
    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       {
          printf("%d ",value);
          value=!value;
       }
       printf("\n");
    }
    return 0;
}
