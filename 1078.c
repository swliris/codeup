#include <stdio.h>
int main()
{
	int a, i, cnt=0;
	scanf("%d", &a);
	for(i=1;i<=a;++i) {
		if(i%2==0)
			cnt += i;
	}
	printf("%d", cnt);
	return 0;
}
