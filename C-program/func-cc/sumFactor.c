
#include <stdio.h>

int sumFactor(int x){
	
	int i, sum=0;
	for( i=1; i<x; i++)
		if( !(x%i) ) sum+=i;

	return sum;


}

int main(void){

	int n=0, i, m=1;
	scanf("%3d", &n);
	for( i=0; i<n; i++){
		scanf("%7d", &m);
		printf("%d\n", sumFactor(m));
	}

	return 0 ;

}
