#include<stdio.h>
#include<stdlib.h>

int main()
{
    int allPrice;
    int allKind;

    int eachP, eachK;
    int Price=0;

    scanf("%d%d", &allPrice, &allKind);

    for (int i = 0; i < allKind; i++)
    {
        scanf("%d%d", &eachP, &eachK);
        Price = (eachP * eachK) + Price;
    }

    if (allPrice == Price)printf("Yes");
    else printf("No");



    return 0;
}
