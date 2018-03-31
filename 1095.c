#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i, b, r = 23;
	for (i = 0; i < a; i++)
	{
		scanf("%d", &b);
		if (b < r)
			r = b;
	}
	printf("%d", r);
	return 0;
}
