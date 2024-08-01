#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    scanf("%f", &num);
    if(num-(int)num==0)
        printf("integer");
    else
        printf("float");
    return 0;
}
