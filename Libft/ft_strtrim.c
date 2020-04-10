//https://pastebin.com/HMAje4AZ

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int		ft_isset(char *str, char *wrong)
{
	while(*wrong)
	{
		if (*wrong == *str)
			return (1);
		wrong++;
	}
	return (0);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    char *cpy;
    int i;

    i = 0;
    str = (char *)s;
    if (!s)
		return (NULL);
    if ((cpy = (char*)malloc(sizeof(char) * len + 1)) == NULL)
        return (NULL);
    while(str[start] && len > 0)
    {
        cpy[i] = str[start];
        start++;
        i++;
        len--;
    }
    cpy[i] = '\0';
    return (cpy);
}

char		*count_malloc(char *str, char *wrong)
{
	int full_size;
	int i;

	i = 0;
	while(ft_isset(&str[i], wrong))
		i++;
	full_size = ft_strlen(str);
	if //SECURITE A FAIRE avec dup
	while(ft_isset(&str[full_size - 1], wrong))
		full_size--;
	/*if (full_size < i)
		full_size = i;*/ //Je ne sais pas à quoi ça sert
	return (ft_substr(str, i, full_size - i));
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	char *wrong;
	char *dest;

	str = (char *)s1;
	wrong = (char *)set;
	return (count_malloc(str,wrong));
}

int main(void)
{
    char str1[]="+++r++";
    char set[]="+";
    printf("%s",ft_strtrim(str1,set));
    return (0);
}