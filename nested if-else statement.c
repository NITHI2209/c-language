#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=1&&age<=200)
    {
       if(age>=18)
       {
          printf("Your age is valid");
       }
       else
       {
          int remaining=18-age;
          printf("You are not eligible and you have to wait till %d",remaining);
       }
    }
    else
    {
       printf("It is an invalid age");   
    }
    return 0;
}
