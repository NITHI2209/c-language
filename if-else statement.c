#include <stdio.h>

int main()
{
  int age;
  printf("Enter your age\n");
  scanf("%d",&age);
  if(age>=18)
  {
         printf("Your voter id is generated");
  }
  else
  {
       int remainingAge=18-age;
       printf("Now you are not eligiable please wait for %d more years",remainingAge);
  }
  return 0;
}
