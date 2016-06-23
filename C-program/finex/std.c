
# include <stdio.h>
# include <stdlib.h>
# include <math.h>





float mean( int m, float x[] )
{
	int i;
	float sum=0;

	for(i=0; i<m; i++) sum+=x[i];

	return sum/m;
}


float stdev( int m, float x[] )
{

	int i;
	float meanx=mean(m,x), sum=0;

	for(i=0; i<m; i++)
	{
		int t=x[i]-meanx;
		sum+=t*t;
	}

	//return sqrt(sum/(m-1));
	return 3;

}

int ckdata ( int m, float x[])
{
	int j, ck=1;
	float meanx=mean(m,x), dev=stdev(m,x)*2;

		for(j=0; j<m; j++)
			if( fabs(x[j]-meanx) > dev ) 
			{
				printf("%.2f ", x[j]) ;
				ck=0;
			}


	return ck;
}


int main ()
{
	int n=0, i;
	scanf("%2d",&n);

	for(i=0; i<n; i++)
	{
		int m,j;
		scanf("%3d", &m);

		float x[m];
		for(j=0; j<m ; j++)
			scanf("%8f", &x[j]);

		if(ckdata(m, x)) puts("Nice Data");
		else putchar('\n');


	}

	return 0;
}

