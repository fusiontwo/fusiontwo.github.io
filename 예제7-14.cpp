#include <stdio.h>

int main(void)
{
	int n, d;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	do {
		d = n % 10;
		n /= 10;
		printf("%d", d);
	} while (n != 0);
	return 0;
}