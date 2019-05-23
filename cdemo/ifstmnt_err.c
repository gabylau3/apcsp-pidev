#include <stdio.h>

int main()
{
  int a = 0;
int b = 1;
int c = 0;
int d = 3;

printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

  // if statement ERROR to test is a is equal to 0
  if (a == c)
  {
    printf("a is equal to c\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (b != a)
{
	printf("b is not equal to a\n");
}  
if (b > c)
{
	printf("b is greater than c\n");
}

if (d >= c)
{
	printf("d is greater than or equal to c\n");
}

if (a == 0 && b == 1)
{
	printf("a is equal to zero and b is equal to 1\n");
}

if (a == 0 || b == 0)
{
	printf("a is equal to 0, but b is not\n");
}

if (!(a == 65))
{
	printf("a is not equal to 65\n");
}
}
