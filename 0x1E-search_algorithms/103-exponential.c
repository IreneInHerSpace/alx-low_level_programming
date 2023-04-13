#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located or -1 if value is not present
 *         in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    int bound = 1;

    if (array == NULL)
        return (-1);

    while (bound < (int)size && array[bound] < value)
    {
        printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%d] and [%d]\n", bound / 2, bound >= (int)size ? (int)size - 1 : bound);

    return (binary_search(array, bound / 2, bound >= (int)size ? (int)size - 1 : bound, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @start: Index of the first element of the subarray to search in
 * @end: Index of the last element of the subarray to search in
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 if value is not present
 *         in array or if array is NULL
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
    int mid;

    if (array == NULL)
        return (-1);

    while (start <= end)
    {
        mid = (start + end) / 2;

        printf("Searching in array:");
        while (start <= end)
        {
            printf(" %d", array[start]);
            if (start != end)
                printf(",");
            start++;
        }
        printf("\n");

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return (-1);
}
