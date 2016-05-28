
#include <stdio.h>
#include <stdlib.h>
#define CUP(C) ((C)-32)

char *upcase( char s[] )
{
	for (int i=0; s[i]!='\0'; i++)
		if ( s[i]>='a' && s[i]<='z') s[i]=CUP(s[i]);
	
	return s;
}

int main()
{
	int n=0;
	scanf("%d",&n);

	char s[n][101];

	for (int i=0; i<n; i++)
	{
		scanf("%100s",s[i]);
		puts(upcase(s[i]));
	}

	return 0;
}
