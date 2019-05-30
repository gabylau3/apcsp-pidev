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

  while (1)
  {
    fgets(input, 200, stdin);
    if (sscanf(input, "%d", &lower) == 1) break;
  printf("Not a valid radius - try again!\n");
  
  }
   printf("Choose the higher number for the radius range\n");

  while (1)
  {
    fgets(input, 200, stdin);
    if (sscanf(input, "%d", &higher) == 1) break;
  printf("Not a valid radius - try again!\n");
  
  }

  for (float r = lower; r <= higher; r++ )
  {
    float b = areaofcircle(r); printf("Area = %f\n", b); 
     }
 

}
