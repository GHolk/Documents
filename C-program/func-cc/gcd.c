
#include <stdio.h>

int gcd(int x, int y){
	
	int i, min=( (x<y)?x:y ) , gcd;
	for( i=1; i<=min; i++){
		if( x%i || y%i ){}
		else gcd=i;
	}

	return gcd;


}

int main(void){

	int n=0, i, m=1, o=1;
	scanf("%3d", &n);
	for( i=0; i<n; i++){
		scanf("%7d %7d", &m, &o);
		printf("%d\n", gcd(m,o));
	}

	return 0 ;

}
