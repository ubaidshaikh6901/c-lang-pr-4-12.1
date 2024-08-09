#include <stdio.h>
int main()
{
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (j = ((2 * i) - 2); j < ((2 * rows) - 2); j++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}