#include <stdio.h>
int main()
{
	int a, b;
	int i, j;
	scanf("%d %d", &a, &b);
	for(i=1;i<=a;i++) {
		for(j=1;j<=b;j++) {
			printf("%d ", i);
			printf("%d\n", j);
		}
	}
	return 0;
}
