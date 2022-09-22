#include <stdio.h>				ЛАБА 3.2.12
#include <locale.h>
 
int main()   
{
	setlocale(LC_ALL, "ru");

	float a = 0;
	printf("Введите число (а): \n");
	scanf_s("%f", &a);
	printf("\n");



	float k = 1;
	if (a >= 3 || a <= 1)
	{
		printf("Ошибка ввода");
	}
	else
	{
		int m = 1;
		while (k <= a)
		{
			k += 1.0 / m;
			m++;
		}
	}

	printf("%f", k);


	return 0;
}