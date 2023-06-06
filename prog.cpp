#include<stdio.h>
#include<math.h>
int main()
{
	const int n = 2;
	const int m = 3;
	float x[n][m];
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("\n x[%d][%d] =", i, j);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("\n x[%d][%d] =", i, j);
		}
	}
}
