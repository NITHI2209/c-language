#include <stdio.h>

int main()
{
    char c='/';//- * /
    int a=10;
    int b=30;
    int ans;
    switch(c)
    {
       case '+':
              ans=a+b;
              printf("Addition is %d:",ans);
              break;
       case '-':
              ans=a-b;
              printf("Subtraction is %d",ans);
              break;
       case '*':
              ans=a*b;
              printf("Multiplication is %d",ans);
              break;
       case '/':
              ans=a/b;
              printf("Division is %d",ans);
              break;
       default:
              printf("Please enter the valid operation");

    }

    return 0;
}
