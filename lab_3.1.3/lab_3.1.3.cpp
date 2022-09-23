#include <stdio.h>		3.1.3
#include <locale.h>
#include <Windows.h>


int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float n = 0;
	printf("Ââåäèòå ÷èñëî (n): \n");
	scanf_s("%f", &n);
	printf("\n");

	float m = 0;
	printf("Ââåäèòå ÷èñëî (m): \n");
	scanf_s("%f", &m);
	printf("\n");

	printf("a) S=1+2+...+n \n");
	printf("б) F=1*2*...*n \n");
	printf("в) A=m+(m+1)+...+(m+n) \n");
	printf("г) B=m*(m+1)*...*(m+n) \n");
	printf("д) Y=1+1/2+1/3+...+1/n \n");
	printf("е) X=1/m+1/(m+1)+...+1/(m+n) \n");
	printf("ж) S=1+1*2+1*2*3+1*2*3*4+...+1*2*3*...*n \n");

	char c;
	scanf_s(" %c", &c);
	
	switch (c)
	{
	case 'à':
	{
		float S = 0;
		for (int i = 0; i < n; i++)
		{
			S += i;
		}

		printf("%f", S);
		break;
	}

	case 'á':
	{
		int F = 1;
		for (int i = 1; i <= n; i++)
		{
			F *= i;
		}

		printf("%d", F);
		break;
	}

	case 'â':
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

	case 'ã':
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
	case 'ä':
	{

		float Y = 0;
		for (int i = 1; i <= n; i++)
		{
			Y += 1.0/i;
		}

		printf("%f", Y);
		break;

	}

	case 'å':
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

	case 'æ':
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
			printf("Îøèáêà ââîäà!");
			break;
		}
	}

	
	return 0;
}
