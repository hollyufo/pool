#include <unistd.h>

int strlen1(char *s)
{
    int i = 0;

    while(s[i])
    {
        i++;
    }
    return i;
}
char    *ft_strcpy(char *s1, char *s2)
{
    if(s2[0])
    {
        return s1;
    }
    int i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}
char *strdup(const char *s) {
    // Find the length of the input string
    int len = strlen1(s);

    // Allocate memory for the duplicated string
    char *dup = (char *)malloc(len + 1);  // +1 for the null terminator
    if (dup == NULL) {
        return NULL; // Memory allocation failed
    }

    // Copy the string into the allocated memory
    ft_strcpy(dup, s);

    // Return the duplicated string
    return dup;
}
