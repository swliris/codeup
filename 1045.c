#include <stdio.h>
int main()
{
	unsigned int a, b;
	scanf("%u %u", &a, &b);
	printf("%lld\n", a+b);
	printf("%lld\n", a-b);
	printf("%lld\n", a*b);
	printf("%lld\n", a/b);
	printf("%lld\n", a%b);
	printf("%.2f", (double)a/b);
	return 0;
}
