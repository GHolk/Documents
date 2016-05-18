
#include <stdio.h>

char letter(int m)
{ return m+64; }

int main()
{
	int n, m;
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		scanf("%d",&m);
		printf("%c\n",letter(m));
	}


}
