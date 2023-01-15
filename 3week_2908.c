#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char A[4], B[4];

	scanf("%s", &A);
	getchar();
	scanf("%s", &B);

	for (int i = 2; i >=0; i--)
	{
		if (A[i] > B[i]) {
			for (int j = 2; j >= 0; j--) {
				printf("%c", A[j]);
			}
			break;
		}
		else if (A[i] < B[i]) {
			for (int j = 2; j >= 0; j--) {
				printf("%c", B[j]);
			}
			break;
		}
	}

	return 0;
}
