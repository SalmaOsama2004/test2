#include <stdio.h>

int main()
{
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    if ((A - B == 1 && B - D == 2 && A - C == 2) || (B - A == 1 && D - B == 2 && C - A == 2))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
