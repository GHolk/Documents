
#include <stdio.h>

int digital(int m){
	
	m/=10;
	if( m>=1 ) return digital(m)+1 ;
	else return 1 ;

}

int main(void){

	int n=0, i, m=0;
	scanf("%3d", &n);
	for( i=0; i<n; i++){
		scanf("%7d", &m);
		printf("%d\n", digital(m));
	}

	return 0 ;

}
