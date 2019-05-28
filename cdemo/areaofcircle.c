#include <stdio.h>

float areaofcircle(float r)
{
  float a;
  a = r * r * 3.14;
  return a;
}

int main(void) 
{
  float r;
  
 for (float r = 3.5; r < 13.5; r++ )
{
  float b = areaofcircle(r); printf("Area = %f\n", b);
}
 

}
