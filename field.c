#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("5개의 숫자로 이루어진 정수를 입력하시오:");
	scanf_s("%3d%3d", &a, &b);
	printf("입력된 정수는 %d, %d\n", a, b);

	return 0;
}