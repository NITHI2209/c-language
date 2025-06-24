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
       //    value=!value;
       //     if(value==1)
       //     {
       //        value=0;
       //     }
       //     else
       //     {
       //        value=1;
       //     }
           value=value==0?1:0;
       }
       printf("\n");
    }
    return 0;
}
