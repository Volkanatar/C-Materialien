#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
int main()
{
    int numbers[5];

    // 0, 1, 2, 3, 4
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = 1337;
    }


    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    int numbers2[4] = {13, 12, 11, 10};

    for (int i = 0; i < 4; i++)
    {
        printf("numbers2[%d] = %d\n", i, numbers2[i]);
    }

    return 0;
}