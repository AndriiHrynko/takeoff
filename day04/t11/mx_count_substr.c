// #include <stdio.h>

char *mx_strstr(const char *s1, const char *s2);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub){
    int i = 0;
	int j = 0;
    int counter = 0;

	while (str[i]) {
		j = 0;
		while (sub[j] == str[i + j]) {
			if (sub[j + 1] == '\0')
				counter++;
			j++;
		}
		i++;
	}
	return counter;
}
/*
int main(){
    char *str = "yo, yo, yo Neo";
    char *sub = "yo";
    printf("%d\n", mx_count_substr(str, sub));
    return 0;
}
*/
