// #include <stdio.h>
// #include <string.h>

char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
	int i = 0;
	int j = 0;

	while (s1[i]) {
		j = 0;
		while (s2[j] == s1[i + j]) {
			if (s2[j + 1] == '\0')
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
    printf("1 %s\n", mx_strstr(s1, s2));
    printf("2 %s\n", strstr(s1, s2));
    return 0;
}
*/
