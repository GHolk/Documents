
#include <stdio.h>
#include <stdlib.h>

int distance(int N, int M)
{
	return (N>M) ? (N-M) : (M-N) ; 
}

float angle(int N, int M)
{

	int h=N*60+M, m=M*12;

	return distance(h,m)%720 / (float) 2 ;
}

int main()
{
	int n=0;
	scanf("%3d", &n);
	for (int i=0; i<n; i++)
	{
		int i[2], o[3];
		scanf("%3d:%3d", &i[0], &i[1]);
		float a=angle(i[0],i[1]);
		if (a>180) a=360-a;
		printf("%.1f\n", a);
	}

	return 0;
}
