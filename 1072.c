﻿#include <stdio.h>
int main()
{
	int a, i, b;
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		scanf("%d", &b);
		printf("%d\n", b);
	}
	return 0;
}
