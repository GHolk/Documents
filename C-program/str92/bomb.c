
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CUP(C) ((C)-32)

void setbomb ( char m[7][8] , int i , int j )
{
	for (int k=0; k<9; k++)
	{
		char *f=&m[i-1+k/3][j-1+k%3];
		if ( *f!='*' ) (*f)++;
	}
}

void mapbomb ( char m[7][8] )
{

	for (int i=1; i<6; i++)
		for (int j=1; j<6; j++)
			if ( m[i][j] == '*' ) setbomb(m,i,j);
}

void pmap ( char m[7][8] )
{
	for (int i=1; i<6; i++)
	{
		for (int j=1; j<6; j++)
			if (m[i][j] == '*') putchar('*');
			else putchar( m[i][j]+2 ) ;
		putchar('\n');
	}
}

int main()
{
	char map[7][8]={0};
	//char str[10]={0};

	for (int i=1; i<6; i++)
	{
		fgets( &(map[i][1]), 7, stdin);
		//sprintf(map[i]," %s",str);
	}

	mapbomb(map);
	pmap(map);

	return 0;
}
