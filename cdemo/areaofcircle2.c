#include <stdio.h>

float areaofcircle(float r)
{
  float a;
  a = r * r * 3.14;
  return a;
}

int main(int argc, char* argv[]) 
{
  float r;

  char input [200];
  int lower;
  int higher;

  printf("Choose the lower number for the radius range\n"); 
  fgets(input, 200, stdin);
  sscanf(input, "%d", &lower);
  
  printf("Choose the higher number for the radius range\n");
  fgets(input, 200, stdin);
  sscanf(input, "%d", &higher);

;

  for (float r = lower; r <= higher; r++ )
  {
    float b = areaofcircle(r); printf("Area = %f\n", b); 
     }
 

}
