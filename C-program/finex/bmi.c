
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main ()
{
	int n=0, i;
	scanf("%2d",&n);

	for(i=0; i<n; i++)
	{
		int h, w;
		float bmi, b[2]={ 18.5, 24 };

		scanf("%3d %3d", &h, &w);

		bmi = (float) w*10000/h/h;

		//printf("%f\n",bmi);
		if (bmi<18.5) putchar('T');
		else if (bmi<24) putchar('N');
		else putchar('F');

		putchar('\n');

	}

	return 0;
}

