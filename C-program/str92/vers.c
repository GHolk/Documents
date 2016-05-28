
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CUP(C) ((C)-32)

void mapbomb ( char m[7][8] )
{

	for (int i=1; i<6; i++)
		for (int j=1; j<6; j++)
			if ( m[i][j] == '*' ) setbomb(m,i,j);

	return m;
}

void setbomb ( char m[7][8] , int i , int j )
{
	for (int k=0; k<9; i++)
	{
		char *f=m[i-1+k/3][i-1+k%3];
		if ( *f == '*' ) ;
		else (*f)++;
	}
}

void pmap ( char m[7][8] )
{
	for (int i=1; i<6; i++)
		for (int j=1; j<6; j++)
			if (m[i][j] == '*') ; 
			else putchar( m[i][j]+2 ) ;
}

int main()
{
	char map[7][8]={0};

	for (int i=1; i<6; i++)
		fgets( *(map[i]+1), 6, stdin);
	
	for (int 
}
