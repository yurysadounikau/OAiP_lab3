 #include <stdio.h>     ���� 3.(9).5


int main()
{
    double pi4 = 1, num = 3;

    for (int i = 0; i < 500; i++) 
    {
        if (i % 2 != 0)
        {
            pi4 += 1 / num;
        }
        else 
        {
            pi4 -= 1 / num;
        }
        num += 2;
    }

    printf("%f", 4 * pi4);
	return 0;
}