#include <stdio.h>

int main(void)
{
	int n, d;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	do {
		d = n % 10;
		n /= 10;
		printf("%d", d);
	} while (n != 0);
	return 0;
}