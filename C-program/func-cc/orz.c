
#include <stdio.h>

void print(void){
	printf("orz");
}

int main(void){

	int n=0, m=0, i, j;
	scanf("%3d", &n);
	for( i=0; i<n; i++){
		scanf("%3d", &m);
		for( j=0; j<m; j++)
			print();
		putchar('\n');
	}

	return 0 ;

}
