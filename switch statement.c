#include <stdio.h>

int main()
{
    int day=3;
    switch(day){
       case 1:
              printf("Monday");
              break;
       case 2:
              printf("Tuesday");
              break;
       case 3:
              printf("Wednesday");
              break;
       case 4:
              printf("Thursday");
              break;
       default:
              printf("No day is given");
    }

    return 0;
}
