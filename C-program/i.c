
#include <stdio.h>

long double power( long double x, long int n ){

	if( n==0 ) return 1;
	else return x*power(x,n-1);
}

int main (void){

	while( 1 ){

		int ratio=2;
		long double i;
		long int n;

		scanf("%ld", &n);
		i = power( ((long double)1/n+1) , n )/ratio ; 
		printf("%llf", &i);
	}

}
