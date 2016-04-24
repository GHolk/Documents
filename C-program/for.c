
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
void print_argument( int argc , char *argv[] ){

int i ; 

for( i=0 ; i<argc ; i++ ){
	print_letter( argv[i] );
}

void print_letter( char arg[] ){

int i ;

for( i=0; arg[i] != '\0' ; i++ ){

	char ch = arg[i]; 
	if( can_print(ch) )
		printf("'%c' = '%d'\n", ch, ch);

}

puts("");

}

int can_print( char ch ){

return isalpha(ch) || isblank(ch) ;

}

int main( int argc , char *argv[]){

print_argument(argc, argv);

return 0 ;

}
*/

int clear(void){
	while( getchar() != '\n' ); 
	return 0 ;
}

int main(){

int i, num, time; 


do {
puts("please keyin a nature number: ");
scanf("%8d", &num );
clear();
} while( !(num>0) ); 

for( i=1; i<=100; i++ ){
	if( i%num == 0 ) printf("%d\t",i); 
}

puts("");

int prod = 1 , prodn; 


do{
puts("please keyin a nature number: ");
scanf("%8d", &prodn);
clear();
} while( !(prodn>0) ); 

for( i=1; i<=prodn; i++ ){
	prod *= i; 
}

printf("%d! = %d\n\n", prodn, prod);


int pro, fact; 

do{
puts("please keyin a nature number: ");
scanf("%8d", &pro);
clear();
} while( !(pro>0) );

for( i=1; i<=pro; i++ ){
	if( !(pro%i) ) printf("%d\t", i);
}

puts("");

}
