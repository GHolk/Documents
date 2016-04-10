
#include <stdio.h>


int maximan( int a , int b , int c ){ 

int max = a ; 

if( max < b ) max = b ; 
if( max < c ) max = c ; 

return max ; 
}



int minimal( int a , int b , int c ){

if( a > b ) a = b ; 
if( a > c ) a = c ; 

return a ; 
}



float average( int a, int b, int c ) { 
	return ( (float)( a + b + c ) ) /3 ; 
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

variance = ( fa + fb + fc )/2 ; 

return variance ; 

}

int mid ( int a , int b , int c ){

if( a >= b ){

	if( b > c ) return b ;
	if( a < c ) return a ; 
	}

if( a < b ){

	if( b < c ) return b ;
	if( a > c ) return a ; 
	}

return c ;

}




int main(){

/*
if( argc != 3 ){
	puts("you can only input 3 number! \n"); 
	return 3;
	}
*/

int a, b, c ; 

int sum, prod, min, max ; 
float mean ; 
float variance ; 

puts("please input 3 number devide by space: ");

scanf("%8d %8d %8d", &a, &b, &c);

sum = a + b + c ; 

prod = a * b * c ; 

mean = average( a, b, c ); 

variance = var( a, b, c ); 

max = maximan( a, b, c ); 

min = minimal( a, b, c );


printf("( X , Y , Z ) = ( %d , %d , %d )\n", a, b, c); 

printf("sum = %d\nprod = %d\nmean = %f\nvar = %f\n", 
	sum, prod, mean, variance ); 

printf("max = %d\nmin = %d\nmid = %d\n", max, min, mid(a, b, c) ); 

printf("char X = %c\nY - Z = %d\n Z*Y/X = %.2f\n", 
	 a+64 , b-c ,  (float) c*b/a ); 

//system("pause");



return 0 ;

}
