#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (j = i; j <= rows; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}