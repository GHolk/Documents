
#include <stdio.h>

int main( int argc , char *argv[] ){

if( argc != 3 ){

	puts("you can only input 3 number! \n"); 
	return 3;
	}



int i = 0 ; 

double sum = 0 , prod = 1 , mean = 0 , var , max, min, mid ; 

for( i = 1 ; i < argc ; i++ ){

	sum += (double) argv[i] ; 
	prod *= (double) argv[i] ; 
	
	}

printf( "sum = %f ; \nprod = %f ; \n", 
	sum, prod 
	);

return 0 ;

}
