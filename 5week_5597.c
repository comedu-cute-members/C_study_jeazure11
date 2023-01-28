#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	int ass[28], non_ass[2];
	int m = 0,t=0;

	for (int i = 0; i < 28; i++) {
		scanf("%d", &ass[i]);
	}

	for (int i = 1; i <= 30; i++) {
		t = 0;
		for (int j = 0; j < 28; j++) {
			if (i == ass[j]) {
				t = 1;
				break;
			}
		}
		if (t == 0) {
			non_ass[m] = i;
			m = m + 1;
		}
	}

	for (int i = 0; i < 2; i++) {
		printf("%d", non_ass[i]);
		printf("\n");
	}

	return 0;
}
