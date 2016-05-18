
#include <stdio.h>
# define SWAP(X,Y)  do { X=X^Y; Y=X^Y; X=X^Y; } while (0)

int mid3 (int m[], int n)
{
	n--;
	for(int i=0; i<n; i++)
	{
		if(m[i]>m[i+1]) 
		{
			printf("%d,%d",m[i],m[i+1]);
			SWAP(m[i],m[i+1]); 
			i=-1;
		}
	}


	return m[n/2];
}

int main()
{
	int n, m;
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		scanf("%d",&m);
		int a[m];
		for(int j=0; j<m; j++) scanf("%d",&a[j]);
		
		printf("%d\n", mid3(a,m));
	}


}
