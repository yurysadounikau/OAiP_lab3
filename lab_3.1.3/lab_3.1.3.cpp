#include <stdio.h>		3.1.3
#include <locale.h>
#include <Windows.h>


int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float n = 0;
	printf("¬ведите число (n): \n");
	scanf_s("%f", &n);
	printf("\n");

	float m = 0;
	printf("¬ведите число (m): \n");
	scanf_s("%f", &m);
	printf("\n");

	printf("1) S=1+2+...+n \n");
	printf("2) F=1*2*...*n \n");
	printf("3) A=m+(m+1)+...+(m+n) \n");
	printf("4) B=m*(m+1)*...*(m+n) \n");
	printf("5) Y=1+1/2+1/3+...+1/n \n");
	printf("6) X=1/m+1/(m+1)+...+1/(m+n) \n");
	printf("7) S=1+1*2+1*2*3+1*2*3*4+...+1*2*3*...*n \n");

	char c;
	scanf_s(" %c", &c);
	
	switch (c)
	{
	case 'а':
	{
		float S = 0;
		for (int i = 0; i < n; i++)
		{
			S += i;
		}

		printf("%f", S);
		break;
	}

	case 'б':
	{
		int F = 1;
		for (int i = 1; i <= n; i++)
		{
			F *= i;
		}

		printf("%d", F);
		break;
	}

	case 'в':
	{

		float A = 0;
		int i = 0;
		while (i < n)
		{
			A += m + i;
			i++;
		}

		printf("%f", A);
		break;	
	}

	case 'г':
	{
		float B = 1;
		int i = 0;
		while (i < n)
		{
			B *= m + i;
			i++;
		}

		printf("%f", B);
		break;
	}
	case 'д':
	{

		float Y = 0;
		for (int i = 1; i <= n; i++)
		{
			Y += 1.0/i;
		}

		printf("%f", Y);
		break;

	}

	case 'е':
	{

		float X = 0;
		int i = 0;
		while (i < n)
		{
			X += 1.0/( m + i);
			i++;
		}

		printf("%f", X);
		break;

	}

	case 'ж':
	{
		float S = 1;
		int i = 1;
		while (i < n+1)
		{
			S *= i;
			i++;
		}

		printf("%f", S);
		break;
	}

		default:
		{
			printf("ќшибка ввода!");
			break;
		}
	}

	
	return 0;
}