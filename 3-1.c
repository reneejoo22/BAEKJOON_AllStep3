//baekjoon 2739
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a = 0;

	if (scanf("%d", &a) == 0) { printf("error"); };

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
}