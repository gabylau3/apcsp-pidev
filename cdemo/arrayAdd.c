#include <stdio.h>

int arrayAdd (int *arr, int s, int n)

{
  int i = 0;

  int c = i * i + n;
  i++;
  return c;

}
int main(void) 
{
int s = 100;
int n = 2;
int arr[s];

  for (int i = 0; i < 100; i++)
  {
    int d = arrayAdd(arr, s, n);
    printf("%d\n", d );
  }

}
