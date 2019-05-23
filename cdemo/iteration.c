#include <stdio.h>

int main()
{
int d = 54;

	for (int i= 1; i < 101; i++)
	{
		if (d % i == 0)
		{
			printf("%d can be divided evenly by %d\n", d, i);
		}
	}
	
}
