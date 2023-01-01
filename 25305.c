#include<stdio.h>
#include<stdlib.h>

int compare(const void* f, const void* s)
{
    if (*(int*)f > *(int*)s)
        return -1;
    else if (*(int*)f < *(int*)s)
        return 1;
    else
        return 0;
}

int main()
{
    int num, prz;
    int scr[1000]={0,};

    scanf("%d%d", &num, &prz);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &scr[i]);
    }

    qsort(scr, 1000, sizeof(int), compare);

    printf("%d", scr[prz-1]);



    return 0;
}
