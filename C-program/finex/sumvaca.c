

# include <stdio.h>
# include <stdlib.h>

int isser(int* s)
{
	int i;
	for(i=0; i<=5 && *(s+i)==1 ; i++);
	
	if (i==5) return 1;
	else return 0;
}

int isspser(int s[])
{
	if(s[1]!=1) return 0;
	else
	{
		int i;
		for(i=10; i<=13; i++) if(s[i]!=1) return 0;
	}

	return 1;
}

int main ()
{
	int n=0, i;
	scanf("%2d",&n);

	for(i=0; i<n; i++)
	{
		int j, c[5], cs[14]={0};
		for(j=0; j<5; j++) 
		{
			scanf("%2d", &c[j]);
			cs[c[j]]++;
		}

		for(j=0; j<=9; j++)
			if( isser( &cs[j] ) ) break;
			else if( isspser(&cs[j]) ) break;
		
		if(j==10) puts("No");
		else puts("Yes");


	}
	return 0;
}
