#include "../inc/libmx.h"

void mx_del_strarr(char ***arr)
{
    char **ptr_arr = *arr;

    while (*ptr_arr) 
    {
        mx_strdel(ptr_arr);
        ptr_arr++;
    }

    free(*arr);
    *arr = NULL;
}
/*
int main()
{
    char **str = malloc(3 * sizeof(char));

    str[0] = mx_strnew(3 * sizeof(char));
    str[1] = mx_strnew(3 * sizeof(char));
    str[2] = NULL;

    mx_strcpy(str[0], "abc");
    mx_strcpy(str[1], "def");

    printf("%s %s\n", str[0], str[1]);
    
    mx_del_strarr(&str);

    return 0;
}
*/