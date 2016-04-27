
#include<stdio.h>
int main(){

int i, j, n, s, sum;

scanf("%6d",&n);

for( i=0; i<n; i++ ){

	scanf("%7d",&s);

	for( ;s>0;s--) {
		for(j=0; j<s; j++) putchar('*');
		putchar('\n');
	}
}

return 0;
}
