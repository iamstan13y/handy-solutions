#include <stdio.h> 

int main()
{

  int x, num;
  int count = 0;

  scanf("%d", &num);

  for (x = 1; x <= num; x++)
  {
      if  (num % x == 0)
      {
        count += 1;
      }
  }

  if ( count == 2) 
  {
    printf("Number Is Prime!");
  } 
  else
  {
    printf("Number Is Not Prime!");
  }
}
