#include <stdio.h>

int main()
{
    int a=10;
    int b=0;
    int c=10;
    if(a==b&&b==c&&c==a)
    {
       printf("All the values are equal");
    }
    else if(a>=b&&a>=c)
    {
           if(a==b)
           {
              printf("A and B are having greater values and are equal");
           }
           else if(a==c)
           {
              printf("A and C are having greater values and are equal");
           }
           else
           {
              printf("A has the greatest value");
           }
    }
    else if(b>=a&&b>=c)
    {
           if(b==a)
           {
              printf("B and A are having greater values and are equal");
           }
           else if(b==c)
           {
              printf("B and C are having greater values and are equal");
           }
           else
           {
              printf("B has the greatest number");
           }
    }
    else
    {
        if(c==a)
        {
           printf("C and A are equal");
        }
        else if(c==b)
        {
          printf("C and B are equal");
        }
        else
        {
           printf("C is the greatest value");
        }
    }
    return 0;
}
