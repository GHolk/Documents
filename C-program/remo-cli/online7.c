
#include<stdio.h>
int main(){

int i, j, n, s, sum;

scanf("%6d",&s);

for( i=0; i<s; i++ ){

	scanf("%7d",&n);
	sum=0;
	for(j=1; j<=n; j++) sum += j*( j%2 ? -1 : 1 ) ; 
	printf("%d\n",sum);
}

return 0;
}
