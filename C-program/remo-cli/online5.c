
#include<stdio.h>
int main(){

int i, j, n;

for( i=0; i<3; i++ ){

	scanf("%7d",&n);
	for( j=0; j<n; j++) printf("%d", j);
	putchar('\n');
}

return 0;
}
