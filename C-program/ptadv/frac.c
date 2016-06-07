
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

void frac(int i[2], int o[3])
{
	int g=gcd(i[0], i[1]);
	o[0]=i[0]/i[1];
	o[1]=(i[0]%i[1])/g;
	o[2]=i[1]/g;
}

int main()
{
	int n=0;
	scanf("%3d", &n);
	for (int i=0; i<n; i++)
	{
		int i[2], o[3];
		scanf("%3d %3d", &i[0], &i[1]);
		frac(i,o);
		if (o[0]!=0) printf("%d ",o[0]);
		printf("%d/%d\n", o[1], o[2]);
	}

	return 0;
}
