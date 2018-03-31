#include <stdio.h>
int main()
{
	int a, m, d, n, i, cnt = 0;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	for (i = a; ; i = i*m + d)
	{
		cnt++;
		if (n == cnt) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
