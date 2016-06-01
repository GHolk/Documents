
#include <stdio.h>
#include <stdlib.h>
//#define PI 3.1416
#define SWAP(X,Y) WRAP( X=X^Y ; Y=X^Y ; X=X^Y ; )
#define WRAP(S) do { S } while (0)

void *sort(char s[])
{
	for (int i=0; s[i+1]!='\0'; i++)
	{
		if (s[i]>s[i+1])
		{
			SWAP(s[i],s[i+1]);
			i=-1;
		}
	}

	puts(s);
}


int main(void)
{
	int n=0;
	scanf("%5d", &n);

	for (int i=0; i<n; i++)
	{
		char s[10]={0};
		scanf("%9s",s);
		sort(s);
	}

	return 0;
}

