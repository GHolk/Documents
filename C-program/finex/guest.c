
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int isprime( int x )
{
	int i;
	
	for(i=2; x%i != 0 ;i++);

	if(i == x) return 1;
	else return 0;

}


int main ()
{
	int n=0, i;
	scanf("%2d",&n);

	for(i=0; i<n; i++)
	{
		int x, j;

		scanf("%3d", &x);

		for(j=2; j<x ; j++)
			if ( isprime(j)  && isprime(x-j) ) break;

		printf("%d+%d\n",j,x-j);


	}

	return 0;
}

