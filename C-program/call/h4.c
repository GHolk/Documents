
#include <stdio.h>
# define SWAP(X,Y)  do { X=X^Y; Y=X^Y; X=X^Y; } while (0)

int mid2 (int m[])
{
	int c=4;

	for(int i=0; i<c; i++)
	{
		if(m[i]>m[i+1]) 
		{
			SWAP(m[i],m[i+1]); 
			i=-1;
		}
	}

	return m[2];
}

int main()
{
	int n, m[5];
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		scanf("%d %d %d %d %d",&m[0], &m[1], &m[2], &m[3], &m[4]);
		printf("%d\n", mid2(m));
	}


}
