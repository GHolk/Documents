
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main(void)
{
	int n=0;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	{
		int r=0;
		scanf("%d", &r);

		printf("%f\n",r*r*PI);

	}

}

