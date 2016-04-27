
#include<stdio.h>
int main(){

int i, j, n, s, yn;

scanf("%6d",&n);

for( i=0; i<n; i++ ){

	scanf("%7d",&s);
	s;
	yn=1;

	for(j=2; j<s-1; j++) {

		if( !(s%j) ) {
			yn=0;
			break;
		}
	}
	if( yn ) puts("Yes");
	else puts("No");
		
}

return 0;
}
