#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n\n", &a);


float d = 1.1;
float e = 1.2;

float* ptrtod;
float* ptrtoe;

ptrtod = &d;
ptrtoe = &e;

printf("The value of d is %f\n", d);
printf("The value of e is %f\n", e);

printf("The address of d is %d\n", ptrtod);
printf("The address of e is %d\n\n", ptrtoe);


float temp  = *ptrtoe; 
printf("Value of temp is e, aka %f\n",temp);

e = *ptrtod;
printf("e = %f\n",e);

d= temp;
printf("d = %f\n",temp); 

}
