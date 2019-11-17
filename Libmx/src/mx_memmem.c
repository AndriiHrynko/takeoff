#include <stdio.h>
#include <string.h>

int mx_strlen(const char *s);
char *mx_strstr(const char *haystack, const char *needle);
// void *mx_memchr(const void *s, int c, size_t n);

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    const char *p_big = big;
    const char *p_little = little;

    // printf("%zu\n", big_len);
    // printf("%zu\n", little_len);

    int big_len1 = big_len;
    int little_len1 = little_len;

    if(mx_strlen(little) < little_len1)
        return NULL;

    int i = 0;
    int j = 0;

    while(p_big[i] && i < big_len1)
    {
        // printf("test %c\n", p_big[i]);
        j = 0;
        while(p_big[i + j] == p_little[j] && j < little_len1)
        {
            if(p_little[j + 1] == '\0' || (j = mx_strlen(little) - 1))
                return (char*)p_big + i;
            j++;
        }
        i++;
    }

    return NULL;
}

int main()
{
    printf("%s\n", mx_memmem("abcdef", 3, "ce", 2));
    printf("%s\n", memmem("abcdef", 3, "ce", 2));
    return 0;
}
