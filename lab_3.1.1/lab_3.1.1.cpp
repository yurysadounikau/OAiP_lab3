

#include <stdio.h>				3.1.1	
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru");

	float a = 0, x = 0;

	scanf_s("%f", &a);

	do
	{
		a = a * a + 1;
	} while (a < 1000000);

	printf("%f", a);


	return 0;
}

