
#include <stdio.h>

int main( int argc, char *argv[] ){

int i = 0 ; 

for( i = 0 ; i < argc ; i++ ) printf( "arg %d = %s\n", i, argv[i]); 

char *lang[] = { "C", "C++", "Objective-C", "Java", "C#" }; 

for( i = 0 ; i < 5 ; i++ ) printf( "lang %d = %s\n", i, lang[i] );

return 0; 
}
