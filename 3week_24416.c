#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int num;
	int c1, c2;
	int a = 1, b = 1;

	scanf("%d", &num);

	for (int i = 3; i <= num; i++) {
		c1 = a + b;
		a = b;
		b = c1;
	}

	c2 = num - 2;

	printf("%d %d", c1, c2);

	return 0;
}
