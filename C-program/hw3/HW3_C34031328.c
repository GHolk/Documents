/* 程式設計 - 作業三 */
#include <stdio.h>
#include <stdlib.h>
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
	int L=N-M ;
	if (L%2 || !N%2) return L/2+1; 
	else return L/2; 
}

/* D.回傳N到M之間（含N與M）所有奇數之總和 */
int oddSum(int N, int M)
{
    //請完成此函數 
    return 0;
}

/* E.回傳N與M共計幾位數 */
int digit(int N, int M)
{
    //請完成此函數 
    return 0;
}

/* F.回傳N與M之間有幾個平方數 */
int squareCount(int N, int M)
{
    //請完成此函數 
    return 0;
}

/* G.回傳N與M中有幾個一樣的數字 */
int same(int N, int M)
{
    //請完成此函數 
    return 0;
}

/* H.回傳N點M分時，時針與分針的夾角 */
float angle(int N, int M)
{
    //請完成此函數 
    return 0.0;
}

/* I.印出N M之星號 (*) 長方形 */
void rectangle(int N, int M)
{
    //請完成此函數 
}

/* J.印出N M之星號 (*) 平行四邊形 */
void parallelogram(int N, int M)
{
    //請完成此函數 
}

int main(void)
{
	int N, M;
	
	printf("請輸入兩個數：");
	scanf("%d %d", &N, &M);
	
	/*
	printf("A.大小關係: %c\n", relation(N, M));
	printf("B.距離: %d\n", distance(N, M));
	*/
	printf("C.偶數個數: %d\n", evenCount(N, M));
	/*
	printf("D.奇數總和: %d\n", oddSum(N, M));
	printf("E.共計幾位數: %d\n", digit(N, M));
	printf("F.平方數個數: %d\n", squareCount(N, M));
	printf("G.一樣的數字: %f\n", angle(N, M));
	printf("H.時鐘夾角: %d\n", carry(N, M));
	printf("I.NxM長方形:\n");
	rectangle(N, M);
	printf("J.NxM平行四邊形:\n");
	parallelogram(N, M);
		
	system("pause");
	*/
	return 0;
}

