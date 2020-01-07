#include <stdio.h>

int main()
{
  char c;
  if((c = getchar()) != EOF)
	printf("not EOF, value is : %d\n", c);
  else
	printf("EOF, value :  %d\n", c);
  return 0;
}
