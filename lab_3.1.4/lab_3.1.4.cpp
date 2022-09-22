#include <stdio.h>						3.1.4
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru");
	
	int n = 0, sum_1 = 0, p_1 = 1, sum_2 = 0, p_2 = 1, sum_3 = 0, p_3 = 1;

	printf("Введите конечное число элементов (n): ");
	scanf_s("%d", &n);
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum_1 += i;
			p_1*= i;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			sum_2 += i;
			p_2 *= i;
		}
	}


	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			sum_3 += i;
			p_3 *= i;
		}
	}

	printf("\n");
	printf("Сумма четных чисел = %d, произведение четных чисел = %d\n", sum_1, p_1);
	printf("Сумма нечетных чисел = %d, произведение нечетных чисел = %d\n", sum_2, p_2);
	printf("Сумма чисел, кратных трёх = %d, произведение чисел, кратных 3 = %d\n", sum_3, p_3);


	return 0;
}