
#include <stdio.h>
#include <stdlib.h>

int head(char s[2][21])
{
	int i;
	for (i=0; i<21 && s[0][i] == s[1][i]; i++);

	return i;
}

int main()
{
	int n=0;
	scanf("%3d", &n);
	for (int i=0; i<n; i++)
	{
		char s[2][21];
		scanf("%20s %20s", s[0], s[1]);
		printf("%d\n", head(s));
	}

	return 0;
}
