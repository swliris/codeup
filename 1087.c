#include <stdio.h>
int main()
{
	int a, i, sum = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		sum += i;
		if (sum >= a) {
			printf("%d", sum);
			break;
		}
	}
	return 0;
}
