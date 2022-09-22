#include <stdio.h>			À¿¡¿ 3.(9).3
#include <locale.h>

int main()
{


	for (int i = 11; i <= 31; i++)
	{
		int b = i % 10;
		if ((b == 3) || (b == 7))
		{
			int k = i * i;
			int x_1 = (k % 1000 - k % 100) / 100, x_2 = (k % 100 - k % 10) / 10, x_3 = k % 10;
			if ((x_2 > x_1) && (x_3 > x_2))
			{
				printf("%d\n", k);
			}
		}

	}
	return 0;
}