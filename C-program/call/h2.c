
#include <stdio.h>

int f (int m)
{ return m ? 2*f(m-1)-5 : 3 ; }

int main()
{
	int n, m;
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		scanf("%d",&m);
		printf("%d\n",f(m));
	}


}
