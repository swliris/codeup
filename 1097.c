#include <stdio.h>
int main()
{
	int a[19][19];
	int i, j, k, n;
	int x, y;
	for (i = 0; i <= 18; i++) {
		for (j = 0; j < 19; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		for (j = 0; j <= 18; j++) {
			a[x-1][j] = !a[x-1][j];
			a[j][y-1] = !a[j][y-1];
		}
	}
	for (i = 0; i <= 18; i++) {
		for (j = 0; j < 19; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
