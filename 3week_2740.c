#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,m1,m2,k;
	int A[100][100], B[100][100], C[100][100];

	scanf("%d%d", &n, &m1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m1; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	scanf("%d%d", &m2, &k);
	for (int i = 0; i < m2; i++) {
		for (int j = 0; j < k; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	int sum;

	for (int i = 0; i < n; i++) {
		for (int h = 0; h < k; h++) {
			sum = 0;
			for (int j = 0; j < m1; j++) {
				sum = A[i][j] * B[j][h] + sum;
			}
			C[i][h] = sum;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
