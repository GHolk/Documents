
#include <stdio.h>

int add( int a, int b, int c ){ return a+b+c ; }


int times( int a, int b, int c ){ return a*b*c ; }




int maximan( int a , int b , int c ){ 

int max = a ; 

if( max > b ) max = b ; 
if( max > c ) max = c ; 

return max ; 
}



int minimal( int a , int b , int c ){

if( a < b ) a = b ; 
if( a < c ) a = c ; 

return a ; 
}



float average( int a, int b, int c ) { 
	return ( (float) a + (float) b + (float) c )/3 ; 
	}


float var( int a, int b, int c ){

float mean, variance, fa, fb, fc ;  

mean = average( a, b, c ) ; 

fa = (float) a - mean ; 
fb = (float) b - mean ; 
fc = (float) c - mean ; 

fa *= fa ; 
fb *= fb ; 
fc *= fc ; 

variance = ( fa + fb + fc )/3 ; 

return variance ; 

}




int main( int argc , char *argv[] ){

/*
if( argc != 3 ){
	puts("you can only input 3 number! \n"); 
	return 3;
	}
*/

int a = 10 , b = 20 , c = 30 ; 

int sum, prod, min, max ; 
float mean ; 
float variance ; 

sum = add( a, b, c ); 

prod = times( a, b, c ); 

mean = average( a, b, c ); 

variance = var( a, b, c ); 

max = maximan( a, b, c ); 

min = minimal( a, b, c );


printf("sum = %d ; \nprod = %d ; \nmean = %f ; \nvar = %f ; \n", 
	sum, prod, mean, variance ); 

printf("max = %d ; \nmin = %d ; \n", max, min ); 

return 0 ;

}
