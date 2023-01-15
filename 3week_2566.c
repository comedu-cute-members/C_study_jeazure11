#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[9][9];
	int max = 0, a = 0, b = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				a = i, b = j;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", a+1, b+1);

	return 0;
}
