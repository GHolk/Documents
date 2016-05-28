
#include <stdio.h>
#include <stdlib.h>
#define CUP(C) ((C)-32)

int alcon ( char s[] )
{
	int n=0;
	for (int i=0; s[i]!='\0'; i++)
		if ( s[i]>='a' && s[i]<='z') n++;
		else if ( s[i]>='A' && s[i] <='Z' ) n++;
	
	return n;
}

int main()
{
	int n=0;
	scanf("%d",&n);

	char s[n][101];

	for (int i=0; i<n; i++)
	{
		scanf("%100s",s[i]);
		printf("%d\n",alcon(s[i]));
	}

	return 0;
}
