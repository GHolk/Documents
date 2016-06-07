
#include <stdio.h>
#include <stdlib.h>

int sum_mul(int t[], int b)
{
	int sum=0;
	for (int i=t[0]; i<=t[1]; i++)
		if (i%b == 0) sum+=i;
	return sum;
}

int main()
{
	int n=0;
	scanf("%3d", &n);
	for (int i=0; i<n; i++)
	{
		int t[2], b;
		scanf("%5d %5d %3d", &t[0], &t[1], &b);
		printf("%d\n", sum_mul(t, b));
	}

	return 0;
}
