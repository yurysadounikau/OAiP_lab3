#include <stdio.h>			À¿¡¿ 3.(9).4
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru");


	for (int num_1 = 1; num_1 < 10; num_1++)
	{
		for (int num_2 = 1; num_2 < 10; num_2++)
		{
			for (int num_3 = 1; num_3 < 10; num_3++)
			{
				for (int num_4 = 1; num_4 < 10; num_4++)
				{
					int number = num_1 * 1000 + num_2 * 100 + num_3 * 10 + num_4;
					if ((num_1 + num_2 + num_3 + num_4 == 30) && (number % 2 == 0) && (number % 7 == 0) && (number % 11 == 0) && (number <10000))
					{
						printf("%d\n",number);
					}
				}
			}
		}
	}

	return 0;
}	 