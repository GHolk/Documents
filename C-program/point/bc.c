
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=0;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	{
		char s[5];
		int x[3];
		scanf("%d%1s%d", &x[0], s, &x[1]);

		switch (s[0])
		{
		
		case '+':
			x[2]=x[1]+x[0];
			break;

		case '-':
			x[2]=x[0]-x[1];
			break;

		case '*':
			x[2]=x[1]*x[0];
			break;
		}
		printf("%d\n",x[2]);

	}

}

