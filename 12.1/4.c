#include <stdio.h>

int main()
{
    int N = 5;

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= N - i; j++)
        {
            if (j % 2 == 1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}