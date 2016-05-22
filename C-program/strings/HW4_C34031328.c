
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_num( char *str )
{
	for ( ; *str!='\0' ; ++str )
	{
		if ( *str>='0' && *str<='9' )
			putchar(*str);
	}

	putchar('\n');
}


char *print_cat( char *P , char *Q )
{
	static char PQ[42] ;

	strcpy(PQ,P);
	strcat(PQ,Q);

	puts(PQ);
	return PQ;
}


void *print_inv ( char *PQ )
{

	for (int i=strlen(PQ); i>=0; --i) putchar( *(PQ+i) );
	putchar('\n');
}

int num_count ( char *s )
{
	int n=0;
	for (int i=0; *(s+i)!='\0'; ++i)
		if ( *(s+i)>='0' && *(s+i)<='9' ) n++; 
	return n;
}

int num_sum ( char *s )
{
	int n=0;
	for (int i=0; *(s+i)!='\0'; ++i)
	{
		char c=*(s+i);
		if ( c>='0' && c<='9' ) n+=c-48; 
	}

	return n;
}

char* map ( char *P, char *Q )
{
	static char table[128]={0};
	int n=0;

	for (int i=0; *(Q+i)!='\0'; i++)
		table[*(Q+i)]=1;

	for (int i=0; *(P+i)!='\0'; i++)
	{
		char c=*(P+i);
		if (table[c]) table[c]=2;
		else table[c]=3;
	}
	
	return table;
}

void same_diff (char *P, char *Q)
{

	char *map_PQ = map(P,Q);
	char same[21]={0}, diff[21]={0};

	for (int i=0, j=0, k=0; i<256; i++)
		switch ( *(map_PQ+i) )
		{
			case 2: 
				same[j++]=i;
				break;
			case 3:
				diff[k++]=i;
				break;
		}

	printf("%s\n%s\n",same,diff);

}

int main( int argc, char *argv[] )
{

	char P[21], Q[21];

	switch(argc)
	{

		case 1:
			scanf("%20s %20s",P,Q);
			break;

		case 2: 
			strncpy(P,argv[1],20);
			P[20]='\0';
			scanf("%20s",Q);
			break;

		default:
			strncpy(P,argv[1],20);
			P[20]='\0';
			strncpy(Q,argv[2],20);
			P[20]='\0';
			break;
	}


	puts(P);
	puts(Q);
	// print str P

	print_num(P);
	// print num of P	

	char *PQ = print_cat(P,Q);
	// print cated P, Q  

	print_inv(PQ);
	// print inverted PQ. 

	printf("%d\n",num_count(PQ));

	same_diff(P,Q);

	return 0;
}
