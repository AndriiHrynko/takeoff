#include <string.h>
#include <stdio.h>

void mx_print_strarr(char **arr, const char *delim);
void mx_printstr(const char *s);

void mx_del_strarr(char ***arr)
{
    mx_print_strarr(*arr, "0");
}

int main()
{
    char *arr[] = {"ab", "cd", "ef", NULL};
    char *ptr_arr = *arr;
    // mx_print_strarr(&ptr_arr, "0");
    mx_del_strarr(ptr_arr);
    return 0;
}
