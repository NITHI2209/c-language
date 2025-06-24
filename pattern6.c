#include <stdio.h>

int main()
{
    int n;
    int i,j;
    printf("Enter your n value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
           if(i==1||i==n||j==1||j==n||i==j)
           {
              printf("1");
           }
           else
           {
              printf(" ");
           }
       }
       printf("\n");
    }
    return 0;
}
