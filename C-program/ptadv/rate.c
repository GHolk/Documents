
#include <stdio.h>
#include <stdlib.h>

void coor(char s[21], int xy[2])
{
	int f=1;
	for (int i=0; s[i]!='\0'; i++)
	{
		switch(s[i])
		{

		case 'r':
		case 'R': f=(f+1)%4; break;

		case 'l':
		case 'L': f=(f+3)%4; break;
		
		case 'f':
		case 'F': 
			switch(f)
			{
			case 0: xy[1]++; break;
			case 1: xy[0]++; break;
			case 2: xy[1]--; break;
			case 3: xy[0]--; break;
			}
			break;
		}
	}

}

int main()
{
	int n=0;
	scanf("%3d", &n);
	for (int i=0; i<n; i++)
	{
		char s[21];
		int xy[2]={0};
		scanf("%20s", s);
		coor(s,xy);
		printf("(%d,%d)\n", xy[0], xy[1]);
	}

	return 0;
}
