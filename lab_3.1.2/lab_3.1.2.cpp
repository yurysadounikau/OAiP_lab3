
#include <stdio.h>				3.1.2
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "ru");

	int n = 0;
	printf("¬ведите число n:\n");
	scanf_s(" %d", &n);
	printf("\n");


	int k = 0;
	for (int i = 1; i <= n; i++)
	{

		for (int j = i; j <= n; j++)
		{
			if (j * j * j + i * i * i == n)
			{
				k++;
			}
		}
	}

	printf("%d", k);


	return 0;
}