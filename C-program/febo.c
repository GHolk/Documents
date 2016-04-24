
#include <stdio.h>

int main(){

int i, n ;
int sum[2]= { 0 , 1 } ; 


scanf("%d", &n); 

for( i=0; i<n; i++ ){

	int j = i%2 ; 
	sum[j] += sum[!j] ;
}

printf("f(%d) = %d \n", n, sum[i%2]);

return 0 ;

}

