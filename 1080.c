#include <stdio.h>
int main()
{
	int a, i, cnt=0;
	scanf("%d", &a);
	for(i=1;;i++)
	{
		cnt+=i;
		if(cnt>=a){
			printf("%d", i);
			break;
		}
	}
	return 0;
}
