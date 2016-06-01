
#include <stdio.h>
#include <stdlib.h>
//#define PI 3.1416
#define SWAP(X,Y) WRAP( X=X^Y ; Y=X^Y ; X=X^Y ; )
#define WRAP(S) do { S } while (0)

int fh(char s[])
{
	char tab[10]={0};
	int n=0, m=0;
	
	for (int i=0; s[i]!='\0'; i++)
	{
		if (s[i] >=48 && s[i] <=58) tab[s[i]-48]++;
	}

	for (int i=0; i<10; i++)
		if (tab[i]==3) n++;
		else if (tab[i]==2) m++;

	return (n && m);
}


int main(void)
{
	int n=0;
	scanf("%5d", &n);
	getchar();

	for (int i=0; i<n; i++)
	{
		char s[10]={0};
		fgets(s,10,stdin);
		if( fh(s) ) puts("Yes");
		else puts("No");
	}

	return 0;
}

