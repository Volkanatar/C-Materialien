#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Vector; // { }

// typedef

int *createArray(unsigned int length, int value)
{
    int *data = (int *)malloc(length * sizeof(int));

    if (data == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        data[i] = value;
    }

    return data;
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }

    return NULL;
}

float meanVector(Vector *vector)
{
}

int minVector(Vector *vector)
{
}

int maxVector(Vector *vector)
{
}


void printVector(Vector *vector)
{
}

int main()
{
    Vector v1 = {.data = createArray(3, 1), .length = 3};
    v1.data[1] = 2;

    printVector(&v1);

    int max_v1 = maxVector(&v1);
    int min_v1 = minVector(&v1);
    float mean_v1 = meanVector(&v1);

    printf("Max: %d\n", max_v1);
    printf("Min: %d\n", min_v1);
    printf("Mean: %f\n", mean_v1);

    return 0;
}
