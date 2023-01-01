#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define ARR_NUMBER    20000

char arr[ARR_NUMBER][51];

int cmp(char* first, char* second)
{
    int x = strlen(first);
    int y = strlen(second);
    if (x < y) return -1;
    else if (x > y) return 1;
    else
    {
        return strcmp(first, second);
    }
}

int main()
{
    int num;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%s", &arr[i]);
    }

    qsort(arr, num, 51 * sizeof(char), cmp);
    printf("%s\n", arr[0]);
    for (int i = 1; i < num; i++) {
        if (strcmp(arr[i - 1], arr[i])) printf("%s\n", arr[i]);
    }




    return 0;
}
