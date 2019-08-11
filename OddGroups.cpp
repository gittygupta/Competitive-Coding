#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/// Odd Groups Program
int main()
{
    int c = 1;
    int k;
    int sum;

    printf("Enter k \n");
    scanf(" %d", &k);

    for(int i = 1; i <= k; i++)
    {
        sum = 0;
        for(int j = 1; j <= i; j++)
        {
            sum = sum + c;
            c+=2;
        }
    }
    printf(" %d", sum);

    return 0;
}

