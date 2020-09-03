#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int form(int x)
{
	int y = 2, z = 0;
	while (y<=x+1)
	{
		z = 2*pow(y,2) - 1;
		//printf("%d ", z);
		y++;
	}
	return z;
}
int main()
{
	int a,b,n=0;
	printf("For n <= ");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		if ((form(b) == 1 || form(b) % 2 == 0 || form(b) % 3 == 0 || form(b) % 5 == 0 || form(b) % 7 == 0)
			&& (form(b) != 2 && form(b) != 3 && form(b) != 5 && form(b) != 7))
		{
			continue;
		}
		//printf("%d ", form(b));
		n++;
	}
	printf("\nthere are %d numbers t(n) that are prime.", n);
	return 0;
}