#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*int main()
{
    int cupcakes;
    int packs = 0;
    int cpy = 0;

    scanf(" %d", &cupcakes);

    for(int i = 1; i<=(cupcakes/2 + 1); i++)        // Calculations
    {
        int c = cupcakes%i;
        if(c >= packs)
        {
            packs = i;
        }
    }
    printf("%d\n", packs);

    return 0;
}
*/

/// Simpler code:

int main()
{
    int cupcakes;
    scanf(" %d", &cupcakes);

    int packs = cupcakes/2 + 1;

    printf("%d\n", packs);

    return 0;
}
