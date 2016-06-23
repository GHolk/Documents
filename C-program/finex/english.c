
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main ()
{
	int n=0, i;
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		int m;
		char s[7];
		scanf("%2d %6s", &m, s);

		if( strcmp(s,"Upper") == 0 ) putchar(64+m);
		else if( strcmp(s,"Lower") == 0 ) putchar(96+m);

		putchar('\n');

	}

	return 0;
}

