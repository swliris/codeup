#include <stdio.h>
int main()
{
	int map[11][11], x = 2, y = 2, i, j;
	for (i = 1; i <= 10; i++)
		for (j = 1; j <= 10; j++)
			scanf("%d", &map[i][j]); // 입력 받음
	while (map[x][y] != 2) {
		map[x][y] = 9;
		if (map[x][y + 1] != 1)
			y += 1; // 오른쪽이 1이 아니면 y + 1
		else if (map[x + 1][y] != 1)
			x += 1; // 오른쪽이 1이면 x + 1 (아랫줄로)
		else 
			break; // 오른쪽과 아래 둘 다 1이면 종료
	}
	map[x][y] = 9; // 2까지 9로 칠하기
	for (i = 1; i <= 10; i++) { // 출력
		for (j = 1; j <= 10; j++)
			printf("%d ", map[i][j]);
		printf("\n");
	}
	return 0;
}