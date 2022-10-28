#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c;
	char s[80], t[80];

	printf("스페이스로 분리된 문자열을 입력하시오:");
	scanf_s("%s%c%s", s, &c, t);

	printf("입력된 첫번쨰 문자열=%s\n", s);
	printf("입력된 문자=%c\n", c);
	printf("입력된 두번쨰 문자열=%s\n", t);

	return 0;
}