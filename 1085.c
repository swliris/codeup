﻿#include <stdio.h>
int main()
{
	int h, b, c, s;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	printf("%.1f MB", (h*b*c*s) / (8.0 * 1024 * 1024));
	return 0;
}
