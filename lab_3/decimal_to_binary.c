#include <stdio.h>

int main()
{
    int deci, binary[32], i = 0;

    printf("Enter a decimal: ");
    scanf("%d", &deci);

    if (deci == 0)
    {
        printf("binary: 0\n");
        return 0;
    }

    while (deci > 0)
    {
        binary[i] = deci % 2;
        deci /= 2;
        i++;
    }

    printf("Binary: ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}