
#include<stdio.h>
int main(){

int i, j, n, s, sum;

scanf("%6d",&s);

for( i=0; i<s; i++ ){

	scanf("%7d",&n);
	sum=0;
	for(j=1; j<=1000; j*=10) sum += n%(10*j)/j; 
	printf("%d\n",sum);
}

return 0;
}
