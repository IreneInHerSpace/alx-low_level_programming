#include "search_algos.h"
/**
 * linear_search - search using a linear search
 * @array: the array
 * @size: size of the array
 * @value: the search value
 * Return: index of first instance of value or -1 on fail
 */

int linear_search(int *array, size_t size, int value)
{
        if (array == NULL)
        {
                return (-1);
        }
        for (size_t i = 0; i < size; i++)
        {
                printf("Value checked array[%zu] = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                        return (i);
                }
        }
        return (-1);
}
