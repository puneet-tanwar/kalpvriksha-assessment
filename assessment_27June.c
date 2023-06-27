
#include <stdio.h>
#include <string.h>
int main()
{
    char tree[15][20] = {
        "Bangalore",
        "Bangalore East", "Bangalore West",
        "A", "B", "C", "D",
        "56001","56002","56003","56004","56005","56006","56007","56008",
    };
    char code1[20], code2[20];
    printf("\nEnter Code 1: ");
    scanf("%[^\n]%*c", code1);
    printf("\nEnter Code 2: ");
    scanf("%[^\n]%*c", code2);
    int corporationIndex1 = -1, corporationIndex2 = -1, townIndex1, townIndex2, suburbIndex1, suburbIndex2, cityIndex = 0;
    for (int i = 7; i < 16; i++)
    {
        if (!strcmp(tree[i], code1))
        {
            corporationIndex1 = i;
        }
    }

    for (int i = 7; i < 16; i++)
    {
        if (!strcmp(tree[i], code2))
        {
            corporationIndex2 = i;
        }
    }
    if (corporationIndex1 < 0 && corporationIndex2 < 0)
    {
        printf("\n Enter valid codes!!");
        return 0;
    }
    townIndex1 = (corporationIndex1 - 1) / 2;
    suburbIndex1 = (townIndex1 - 1) / 2;

    townIndex2 = (corporationIndex2 - 1) / 2;
    suburbIndex2 = (townIndex2 - 1) / 2;

  
    printf("\nCommon between corporations: ");
    if (townIndex2 == townIndex1)
    {
        printf("%s ,", tree[townIndex1]);
    }
    if (suburbIndex1 == suburbIndex2)
    {
        printf(" %s ,", tree[suburbIndex1]);
    }
    printf(" %s", tree[cityIndex]);

    return 0;
}
