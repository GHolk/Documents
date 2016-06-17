
# include <stdio.h>
# include <stdlib.h>

int add (int a, int b)
{
	return a+b;
}

int deal (int a, int b, int (*f)(int,int))
{
	return (*f)(a,b);
}

int main()
{
	int a=1, b=2; 
	printf("a+b=%d",deal(a,b,&add));
	return 0;
}
