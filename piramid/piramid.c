#include <stdio.h>

void spira(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void nrpira(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++) {
			putchar(' ');
		}
		for (int j = 1; j <= 2 * (n - i) + 1; j++) {
			printf("%d", i);
		}
		putchar('\n');
	}
}

int main(void)
{
	int n;
	printf("피라미드의 높이 : ");
	scanf_s("%d", &n);

	spira(n);
	nrpira(n);

	return 0;
}