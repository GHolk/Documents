/* 程式設計 - 作業三 */
#include <stdio.h>
#include <stdlib.h>
#define SWAP(X,Y)   WRAP(X=X^Y; Y=X^Y; X=X^Y;)
#define WRAP(Z) do { Z } while (0)

/* A.回傳N與M的大小關係（>或<或=） */
char relation(int N, int M)
{
	if (N>M) return '>' ;
	else if (N<M) return '<' ;
	else return '=' ;
}

/* B.回傳N與M的距離 */
int distance(int N, int M)
{
	return (N>M) ? (N-M) : (M-N) ; 
}

/* C.回傳N到M之間（含N與M）所有偶數之個數 */
int evenCount(int N, int M)
{
	int L=distance(N,M); 
	if ( (L%2) || !(N%2) ) return L/2+1; 
	else return L/2; 
}

/* D.回傳N到M之間（含N與M）所有奇數之總和 */
int oddSum(int N, int M)
{
	int L=distance(N,M); 
	if (L%2) return (M+N+1)*(L+1)/4 ; 
	else if (L%4) return (N+M)*(L/4+1) ; 
	else return (M+N)*L/4 ; 
	/*if ( (L%2) || (N%2) ) return L/2+1; 
	else return L/2; */
}

/* E.回傳N與M共計幾位數 */
int digit(int N, int M)
{
	int i=0; 
	for ( ; N>0; i++) N/=10;
	for ( ; M>0; i++) M/=10;
	return i;
}

/* F.回傳N與M之間有幾個平方數 */
int squareCount(int N, int M)
{
	int i=0, j=0; 
	if (N>M) SWAP(N,M); 
	for (i=0; i*i<=M; i++) if (i*i>=N) j++;
	return j;
}

/* G.回傳N與M中有幾個一樣的數字 */
short int same(int N, int M)
{

	short int num[10]={0} ,j=0, i;
	char Ns[10], Ms[10]; 
	sprintf(Ns,"%d",N);
	sprintf(Ms,"%d",M);
	for (i=0; Ns[i]!='\0'; i++)
		num[Ns[i]-48] = 1;
	
	for (i=0; Ms[i]!='\0'; i++)
		if (num[Ms[i]-48]) j++;

	return j;

}

/* H.回傳N點M分時，時針與分針的夾角 */
float angle(int N, int M)
{

	int h=N*60+M, m=M*12;

	return distance(h,m)%720 / (float) 2 ;
}


/* I.印出N M之星號 (*) 長方形 */
void rectangle(int N, int M)
{
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
			putchar('*');
	
		putchar('\n');
	}
}

/* J.印出N M之星號 (*) 平行四邊形 */
void parallelogram(int N, int M)
{
	for(int i=0; i<N; i++)
	{

		for(int j=0; j<i; j++) putchar(' ');
		for(int j=0; j<M; j++) putchar('*');

		putchar('\n');
	}
}

int main(int argc, char *argv[])
{
	int N, M;
	

	if (argc>2)
	{
		sscanf(argv[1], "%d", &N);
		sscanf(argv[2], "%d", &M);
	}
	else 
	{
		printf("請輸入兩個數：");
		scanf("%d %d", &N, &M);
	}

	printf("A.大小關係: %c\n", relation(N, M));
	printf("B.距離: %d\n", distance(N, M));
	printf("C.偶數個數: %d\n", evenCount(N, M));
	printf("D.奇數總和: %d\n", oddSum(N, M));
	printf("E.共計幾位數: %d\n", digit(N, M));
	printf("F.平方數個數: %d\n", squareCount(N, M));
	printf("G.一樣的數字: %hd\n", same(N, M));
	 //carry(N,M);
	printf("H.時鐘夾角: %f deg\n", angle(N, M));
	printf("I.NxM長方形:\n");
	rectangle(N, M);
	printf("J.NxM平行四邊形:\n");
	parallelogram(N, M);
		
	/* system("pause"); */
	return 0;
}

