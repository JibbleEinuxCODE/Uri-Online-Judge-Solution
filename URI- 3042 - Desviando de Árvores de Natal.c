#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, p, m, a, b, c, count;
    while (scanf("%d", &m) && m > 0)
    {
        p = 2;
        count = 0;

        for (i = 0; i < m; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            if (a == 0 && b == 1 && c == 1)
            {
                count += abs(p - 1);
                p = 1;
            }

            else if (a == 1 && b == 0 && c == 1)
            {

                count += abs(p - 2);
                p = 2;
            }
            else if (a == 1 && b == 1 && c == 0)
            {

                count += abs(p - 3);
                p = 3;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}