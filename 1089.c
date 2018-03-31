#include <stdio.h>
int main()
{
	int a, d, n, i, cnt = 0;
	scanf("%d %d %d", &a, &d, &n);
	for (i = a; ; i += d)
	{
		cnt++;
		if (n == cnt) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
