#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;

    scanf("%d%d", &n, &m);

    int num;
    int count = 0;
    num = n * m;

    int* matA = malloc(sizeof(int) * num);
    int* matB = malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &matA[i]);
    }
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &matB[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matA[count] + matB[count]);
            count++;
        }
        printf("\n");
    }




    return 0;
}
