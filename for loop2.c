#include <stdio.h>

int main()
{
    int a,b,c,i;
    printf("Enter the a value\n");
    scanf("%d",&a);
    printf("Enter the b value\n");
    scanf("%d",&b);
    printf("Enter the c value\n");
    scanf("%d",&c);
    if(a==1)//entering 
    {
       if(b<=c)
       {
            for(i=b;i<=c;i++)//
            {
               printf("%d:",i);
            }
       }
       else
       {
          printf("Please enter the valid a and b value");
       }
    }
    else if(a==-1)//entering
    {
       if(b>=c)
       {
            for(i=b;i>=c;i--)
            {
                 printf("%d",i);
            }
       }
       else
       {
         printf("Please enter the valid a and b value");     
       }
    }
    else
    {
       printf("Please enter the valid option");
    }
    return 0;
}
