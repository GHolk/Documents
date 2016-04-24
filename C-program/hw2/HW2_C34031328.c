
#include <stdio.h>
#include <stdlib.h>
#define LARGE(a,b) ( a>b ? a : b )
#define SMALL(a,b) ( a>b ? b : a )

int main(){

	int n, m, i; 

	puts("please input two nature number below 26 devide by space: ");
	scanf("%8d %8d", &n, &m);

	int large = LARGE(n,m) , small = SMALL(n,m);

	puts("\n'+' n times: ");
	for( i=0; i<n; i++ ) putchar('+');

	puts("\n\n'-' m times: ");
	for( i=0; i<m; i++ ) putchar('-');

	puts("\n\nn uppercase: ");
	for( i=0; i<n; i++ ) putchar(i+65); 

	puts("\n\nm lowercase: ");
	for( i=0; i<m; i++ ) putchar(122-i);


	int even_sum=0, from_sum=0; 

	puts("\n\nnumber from n to m: ");

	for( i=small; i<=large; i++ ){
		printf("%d ", i); 
		from_sum+=i; 
		if( !(i%2) ) even_sum+=i;
	}

	printf("\n\nsum from n to m: %d", from_sum);
	printf("\neven sum from n to m: %d", even_sum);


	int sum=0; 

	for( i=0; i<=n; i++ ) sum+=i;
	for( i=0; i<=m; i++ ) sum-=i;
	printf("\n1+...+%d -1-...-%d = %d\n", n, m, sum);


	int x_sum=0;

	for( i=0; i<=m; i++ ) x_sum+=i*( i%2 ? -1 : 1 ) ; 
	printf("0-1+2-3...m = %d", x_sum);



	puts("\n\nn,m common divisors: ");
	for( i=1; i<=small; i++ ) 
		if ( !(large%i || small%i) )
			printf("%d ",i);

	puts("\n\nn,m common multiple: ");
	for( i=0; i<100; i++ )
		if ( !(i%large || i%small) )
			printf("%d ",i);
	
	putchar('\n');
	system("pause");


	return 0 ;

}
