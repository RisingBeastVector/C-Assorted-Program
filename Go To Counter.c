#include <stdio.h>
int main()
{
  int start = 10;
  int end = 1;
  counter :
    printf("%d ", start);
	start--;
  if(start >= end)
  {
    goto counter;
  }

  return 0;
}

