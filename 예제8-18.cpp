#include <stdio.h>

void menu();
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int remainder(int a, int b);

int main(void)
{
	int a, b;
	char n, ch;
	menu();
	while (1)
	{
		printf("���ϴ� �޴��� �����Ͻÿ�(1-5):");
		scanf("%c", &n);
		printf("���� 2���� �Է��Ͻÿ�: ");
		scanf("%d %d", &a, &b);
		switch (n)
		{
			case '1':
				printf("������ : %d\n", addition(a, b));
				break;
			case '2':
				printf("������ : %d\n", subtraction(a, b));
				break;
			case '3':
				printf("������ : %d\n", multiplication(a, b));
				break;
			case '4':
				printf("������ : %d\n", division(a, b));
				break;
			case '5':
				printf("������ : %d\n", remainder(a, b));
				break;
		}
		
		printf("����Ϸ��� y�� �����ÿ�:");
		scanf("%c \n", &ch);
		if (ch != 'y')
			break;
		if (ch == 'y')
			continue;
	}
	return 0;
}
void menu()
{
	printf("=============================\n");
	printf("MENU\n");
	printf("=============================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
}
int addition(int a, int b)
{
	return a + b;
}
int subtraction(int a, int b)
{
	return a - b;
}
int multiplication(int a, int b)
{
	return a * b;
}
int division(int a, int b)
{
	return a / b;
}
int remainder(int a, int b)
{
	return a % b;
}