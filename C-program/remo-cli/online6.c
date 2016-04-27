
#include<stdio.h>
int main(){

int i, j, n, s;

scanf("%6d",&s);

for( i=0; i<s; i++ ){

	scanf("%7d",&n);
	printf("case%d:",i+1);
	for( j=0; j<n; j++) printf("%d", j);
	putchar('\n');
}

return 0;
}
