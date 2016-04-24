
#include <stdio.h>
#include <strings.h>

int clear(void){
	while( getchar() != '\n' ); 
	return 0 ;
}

int main(){

float l; 
int time=0; 

do{
	puts("please input the length of string: ");
	scanf("%10f", &l);

} while( !(l>0) ); 

while( l>1 ){

	l/=2; 
	time++;
}

printf("%d days\n", time);


//char passwd[10]; 
char passwd[10]; 

do{
	puts("please input \"1234\": ");
	fgets(passwd, sizeof(passwd)/4, stdin);
	clear();

}while( strcmp(passwd, "1234\n") ); 

puts("yes, you input 1234. ");

return 0 ;

}
