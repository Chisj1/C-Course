#include <stdio.h>

int main()
{
    int i, sum;
    char a[2], b[2];
    scanf("%s %s", a, b);

    for (i = 0; i < 1; i++)
    {
        if (strlen(a) == 2 || strlen(b) == 2)
            sum += 10;
        else
        {
            switch (a[2])
            {
            case 'J' || 'Q' || 'K':
                sum += 2;
            }
        }
    }
    printf("sum = %", sum);
}
