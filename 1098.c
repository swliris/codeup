#include <stdio.h>
int main()
{
	int h, w, n, l, d, x, y;
	int i, j;
	int a[101][101] = { 0 };
	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (l == 1) // 길이가 1이면
			if (a[x][y] == 0) a[x][y] = 1; // 그 좌표만 1로!
		if (l != 1) // 길이가 1 이상이면
		{
			if (d == 0) // 가로
				for (j = 1; j <= l; j++) // 길이(l)만큼 반복
					a[x][y + j - 1] = 1; // 행 그대로, 열 +1
			else if (d == 1) // 세로
				for (j = 1; j <= l; j++) // 길이(l)만큼 반복
					a[x + j - 1][y] = 1; // 행 +1, 열 그대로
		}
	}

	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
