#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const char *cek_prima(int n)
{
    if (n <= 1)
        return "BUKAN";
    if (n == 2)
        return "PRIMA";

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return "BUKAN";
    }
    return "PRIMA";
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%s\n", cek_prima(n));

    return 0;
}
