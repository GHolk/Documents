
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CUP(C) ((C)-32)


int main()
{
	int n=0;
	scanf("%d",&n);

	char s[n][101];

	for (int i=0; i<n; i++)
	{
		scanf("%100s",s[i]);
		printf("%d\n",strlen(s[i]));
	}

	return 0;
}
