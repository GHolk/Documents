/* ¿¿¿¿ - ¿¿¿ */
#include <stdio.h>
#include <stdlib.h>
/* A.¿¿N¿M¿¿¿¿¿¿>¿<¿=¿ */
char relation(int N, int M)
{
	if (N>M) return '>' ;
	else if (N<M) return '<' ;
	else return '=' ;
}

/* B.¿¿N¿M¿¿¿ */
int distance(int N, int M)
{
	return (N>M) ? (N-M) : (M-N) ; 
}

/* C.¿¿N¿M¿¿¿¿N¿M¿¿¿¿¿¿¿¿ */
int evenCount(int N, int M)
{
	int L=N-M ;
	if (L%2 || !N%2) return L/2+1; 
	else return L/2; 
}

/* D.¿¿N¿M¿¿¿¿N¿M¿¿¿¿¿¿¿¿ */
int oddSum(int N, int M)
{
    //¿¿¿¿¿¿ 
    return 0;
}

/* E.¿¿N¿M¿¿¿¿¿ */
int digit(int N, int M)
{
    //¿¿¿¿¿¿ 
    return 0;
}

/* F.¿¿N¿M¿¿¿¿¿¿¿¿ */
int squareCount(int N, int M)
{
    //¿¿¿¿¿¿ 
    return 0;
}

/* G.¿¿N¿M¿¿¿¿¿¿¿¿¿ */
int same(int N, int M)
{
    //¿¿¿¿¿¿ 
    return 0;
}

/* H.¿¿N¿M¿¿¿¿¿¿¿¿¿¿¿ */
float angle(int N, int M)
{
    //¿¿¿¿¿¿ 
    return 0.0;
}

/* I.¿¿N M¿¿¿ (*) ¿¿¿ */
void rectangle(int N, int M)
{
    //¿¿¿¿¿¿ 
}

/* J.¿¿N M¿¿¿ (*) ¿¿¿¿¿ */
void parallelogram(int N, int M)
{
    //¿¿¿¿¿¿ 
}

int main(void)
{
	int N, M;
	
	printf("¿¿¿¿¿¿¿");
	scanf("%d %d", &N, &M);
	
	/*
	printf("A.¿¿¿¿: %c\n", relation(N, M));
	printf("B.¿¿: %d\n", distance(N, M));
	*/
	printf("C.¿¿¿¿: %d\n", evenCount(N, M));
	/*
	printf("D.¿¿¿¿: %d\n", oddSum(N, M));
	printf("E.¿¿¿¿¿: %d\n", digit(N, M));
	printf("F.¿¿¿¿¿: %d\n", squareCount(N, M));
	printf("G.¿¿¿¿¿: %f\n", angle(N, M));
	printf("H.¿¿¿¿: %d\n", carry(N, M));
	printf("I.NxM¿¿¿:\n");
	rectangle(N, M);
	printf("J.NxM¿¿¿¿¿:\n");
	parallelogram(N, M);
		
	system("pause");
	*/
	return 0;
}

