// #include <stdio.h>
// #include <string.h>

char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
    
    int i = 0;
    int j;

    while(s1[i]){
        j = 0;
        while(s1[i + j] == s2[j]){
            if (s2[j] == '\0')
                return (char *)s1 + i;
            j++;
        }
        i++;
    }
    return 0;
}
/*
int main(){

    char *s1 = "abc abd";
    char *s2 = "abd";

    printf("mx_strstr %s\n", mx_strstr(s1, s2));
    printf("strstr %s\n", strstr(s1, s2));

    return 0;
}
*/
