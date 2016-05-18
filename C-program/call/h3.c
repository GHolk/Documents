
#include <stdio.h>

int mid (int x, int y, int z)
{
	if(x>y) 
	{
		if(y>z) return y;
		else if (x>z) return z;
		else return x;
	}
	else //(x<=y)
	{
		if(y<z) return y;
		else if (x>z) return x;
		else return z; 
	}
}

int main()
{
	int n, x, y, z;
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		scanf("%d %d %d",&x, &y, &z);
		printf("%d\n", mid(x,y,z));
	}


}
