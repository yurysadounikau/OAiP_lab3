#include <stdio.h>			3.(9).1
#include <locale.h>

int main()
{

	double l = 20, v1 = 2, v2 = 3;
	double s = 0, v = v2, sv = v1 + v2;

	while (l > 0.00001)
	{
		double t = l / (5 + v);
		s += t * 5;
		l -= t * sv;
		v = sv - v;
		printf("%f\n", s);
	}
	return 0;
}	