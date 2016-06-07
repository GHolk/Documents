
#include <stdio.h>
#include <stdlib.h>

void swap(void* a, void* b)
{
/*
	void* t=a;
	*a=*b;
	*b=*t;
*/
	printf("sizeof: %d\t sizeof: %d\n", sizeof(*a), sizeof(*b));
}

int main()
{
	int a=12, b=24;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}

