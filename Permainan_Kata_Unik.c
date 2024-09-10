#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bandingkan_string(char s1[], char s2[])
{

    if (strlen(s1) != strlen(s2))
    {
        printf("BERBEDA\n");
    }

    else if (strcmp(s1, s2) == 0)
    {
        printf("IDENTIK\n");
    }

    else
    {
        printf("MIRIP\n");
    }
}

int main()
{
    char s1[101], s2[101];

    scanf("%100s", s1);
    scanf("%100s", s2);

    bandingkan_string(s1, s2);

    return 0;
}
