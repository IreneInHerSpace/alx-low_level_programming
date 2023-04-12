#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size), prev = 0, i;

    if (!array)
        return (-1);

    while (array[min(step, size) - 1] < value)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            return (-1);
    }

    for (i = prev; i < min(step, size); i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
