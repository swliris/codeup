#include <stdio.h>
int main()
{
	int in, a, b, c, d, e;
	scanf("%d", &in);
	a = in / 10000;
	b = in % 10000 / 1000;
	c = in % 1000 / 100;
	d = in % 100 / 10;
	e = in % 10;
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n", a * 10000, b * 1000, c * 100, d * 10, e);
	return 0;
}