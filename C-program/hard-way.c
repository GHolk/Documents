
#include <stdio.h>

int main( int argc , char *argv[] ){

if( argc != 2 ){
	puts("you can only have 1 argument! "); 
	return 1 ;
	}


int i = 0 ; 

for( i = 0 ; argv[1][i] != '\0' ; i++ ){


	switch( argv[1][i] ){

	case 'a' :
	case 'A' :
		printf( "%d = a/A; \n", i );
		break; 
	
	case 'e' :
	case 'E' : 
		printf( "%d = e/E; \n", i );
		break; 

	case 'i' :
	case 'I' :
		printf( "%d = i/I; \n", i );
		break; 

	case 'o' : 
	case 'O' : 
		printf( "%d = o/O; \n", i ); 
		break; 

	case 'u' : 
	case 'U' :
		printf( "%d = u/U; \n", i );
		break;

	case 'y' : 
	case 'Y' : 
		if( i > 2 ) printf( "%d = y/Y; \n", i ); 
		break; 

	default : 
		printf( "%d = child; \n", i ); 
	
	}
	}

return 0 ;

}
