﻿#include <stdio.h>
int main()
{
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	for (i = 2; ; i++)
	{
		if (i%a == 0 && i%b == 0 && i%c == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}
