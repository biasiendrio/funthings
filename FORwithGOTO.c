#include<stdio.h>

int main(void)
{
	int i = 0;

	z:

		if (i < 10)
		{
			goto y;
		}
		else
		{
			goto w;
		}

	y:
		i++;
		printf("Incremento: %d\n", i);

		goto z;

	w:
		printf("FIM\n");
		return 0;

}
