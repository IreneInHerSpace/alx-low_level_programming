#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t i = 1;

    if (!array)
        return (-1);

    /* Find the range to search in */
    while (i < size && array[i] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    /* Binary search in the range found */
    return (binary_search(array, i / 2, min(i, size - 1), value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @left: the left index of the range to search in
 * @right: the right index of the range to search in
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if not found
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    while (left <= right)
    {
        print_array(array, left, right);
        mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}

/**
 * print_array - prints an array of integers
 * @array: a pointer to the first element of the array to print
 * @left: the left index of the range to print
 * @right: the right index of the range to print
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * min - returns the minimum of two integers
 * @a: an integer
 * @b: an integer
 *
 * Return: the minimum of a and b
 */
size_t min(size_t a, size_t b)
{
    return (a < b ? a : b);
}

