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
		printf("원하는 메뉴를 선택하시오(1-5):");
		scanf("%c", &n);
		printf("숫자 2개를 입력하시오: ");
		scanf("%d %d", &a, &b);
		switch (n)
		{
			case '1':
				printf("연산결과 : %d\n", addition(a, b));
				break;
			case '2':
				printf("연산결과 : %d\n", subtraction(a, b));
				break;
			case '3':
				printf("연산결과 : %d\n", multiplication(a, b));
				break;
			case '4':
				printf("연산결과 : %d\n", division(a, b));
				break;
			case '5':
				printf("연산결과 : %d\n", remainder(a, b));
				break;
		}
		
		printf("계속하려면 y를 누르시오:");
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
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
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