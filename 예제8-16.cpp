#include <stdio.h>

double factorial(double n);

int main(void)
{
	double x;
	printf("������ ����ұ��: ");
	scanf("%lf", &x);
	printf("���Ϸ��� ���� %lf�Դϴ�.\n", factorial(x));
	return 0;
}

double factorial(double n)
{
	double i;
	double j = 1.0;
	double result = 1.0;
	for (i = 1; i <= n; i++)
	{
		j *= i;
		result += 1.0/j;
	}
	return result;
}
