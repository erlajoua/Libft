#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

/*char	*strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*dest;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	str1 = (char*)s1;
	str2 = (char*)s2;
	i = -1;
	j = -1;
	if (!(dest = malloc(sizeof(char*) * (ft_strlen(str1) + ft_strlen(str2)))))
		return (NULL);
	while (str1[++i])
		dest[i] = str1[i];
	while (str2[++j])
		dest[i + j] = str2[j];
	dest[i + j] = '\0';
	return (dest);
}*/

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str1;
    char *str2;
    char *dest;
    int i;
    int j;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    str1 = (char *)s1;
    str2 = (char *)s2;

    if(!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1))))
        return (NULL);
    while (str1[i])
    {
        dest[i] = str1[i];
        i++;
    }
    while (str2[j])
    {
        dest[i + j] = str2[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int main(void)
{
    char s1[]="salut";
    char s2[]="erwan";
    printf("%s\n",ft_strjoin(s1,s2));
    //printf("%s",strjoin(s1,s2));
    return (0);
}