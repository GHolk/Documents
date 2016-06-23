
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main ()
{
	int n=0, i;
	scanf("%2d",&n);

	for(i=0; i<n; i++)
	{
		int d[3], j;

		scanf("%3d %3d %3d", &d[0], &d[1], &d[2]);

		for(j=1; 
			(j%d[0] != 0) || (j%d[1] != 0) || (j%d[2] != 0); 
			j++);

		printf("%d\n",j);


	}

	return 0;
}

