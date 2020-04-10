#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 == *s2 && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if (n > 0)
        return (*s1 - *s2);
    return (0);
}

int main(void)
{
    char *s1 = "alutouinun";
    char *s2 = "alutouinon";
    printf(":%d\n",strncmp(s1,s2,9));
    printf(":%d",ft_strncmp(s1,s2,9));
    return (0);
}