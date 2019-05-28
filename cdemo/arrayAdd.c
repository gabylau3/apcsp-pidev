#include <stdio.h>

int arrayAdd (int *arr, int s, int n)

{
   for (int i = 0; i < 100; i++)
   {
     arr[i] = arr[i] + n;
   }

}
int main(void) 
{
int arr[100];
for (int i = 0; i < 100; i++)
 {
  arr[i]= i*i;
 }

int s = 100;
int n = 2;
  arrayAdd(arr, s, n);
  for (int i = 0; i < 100; i++)
  {
    printf("%d\n", arr[i]);
  }

}
