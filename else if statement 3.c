#include <stdio.h>

int main()
{
    int age=15;
    if(age<0||age>200)
    {
        printf("Please enter a valid age");
    }
    else if(age>=18)
    {
       printf("Your are eligible"); 
    }
    else
    {
        int remainingAge=18-age;
        printf("You are not eligible please wait till %d",remainingAge);
    }

    return 0;
}
