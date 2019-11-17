#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right)
{
    int swaps = 0;

    while (left < right)
    {
        int m = (left + right) / 2;
        mx_quicksort(arr, left, m);
        mx_quicksort(arr, left, m + 1);
    }

    return swaps;
}

int main()
{
    char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    mx_quicksort(arr, 0, 3); //returns 2
    return 0;
}
