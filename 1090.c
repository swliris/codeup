#include <stdio.h>
int main()
{
	int a, r, n, i, cnt = 0;
	scanf("%d %d %d", &a, &r, &n);
	for (i = a; ; i *= r)
	{
		cnt++;
		if (n == cnt) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
