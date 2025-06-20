#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
       
       if(i==10||i==11||i==13)
       {
          continue;
       }
       printf("%d:",i);
    }

    return 0;
}
