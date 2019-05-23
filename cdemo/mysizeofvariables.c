#include <stdio.h>

int main()

{
unsigned int a = 10;
unsigned char b = 'x';
float c = 1234.1;
double d = 12341.1;

printf("int is %d, char is %c, float is %f, double is %lf\n", a, b, c, d);
printf("Int a has a size of %d bytes\n",  sizeof(a));
printf("char b has a size of %d bytes\n", sizeof(b));
printf("float c has a size of %d bytes\n", sizeof(c));
printf("and double d has a size of %d bytes.\n",  sizeof(d));
}
