
#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n)
{
	int g=1;
	if(m>n)
	{ n^=m; m^=n; n^=m; }

	for(int i=1; i<=n; i++)
		if (n%i == 0 && m%i==0) g=i;

	return g;
}

int main(void)
{
	int n=0;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	{
		int x[3];
		scanf("%d %d", &x[0], &x[1]);
		x[2]=gcd(x[0],x[1]);

		if (x[2] != 1)
		{
			x[0]/=x[2];
			x[1]/=x[2];
		}

		printf("%d/%d\n",x[0],x[1]);

	}

}

