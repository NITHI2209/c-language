#include <stdio.h>

int main()
{
    int mark;
    printf("Enter your age\n");
    scanf("%d",&mark);
    if(mark<0||mark>100)
    {
        printf("Please enter a valid mark");
    }
    else if(mark>=91)
    {
           printf("A");
    }
    else if(mark>=81&&mark<=90)
    {
           printf("B");
    }
    else if(mark>=71&&mark<=80)
    {
           printf("C");
    }
    else if(mark>=61&&mark<=70)
    {
           printf("D");
    }
    else
    {
           printf("Failed");
    }
    return 0;
}
