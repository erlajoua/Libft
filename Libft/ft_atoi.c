#include <stdio.h>

int     ft_atoi(const char *str)
{
    int i;
    int res;
    int signe;

    res = 0;
    signe = 1;
    i = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            signe = signe * (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] < '9')
    {
        res = res * 10;
        res = res + str[i] - '0';
        i++;
    }
    return (res * signe);
}

int main(void)
{
    printf("%d",ft_atoi("+++++++-++121212"));
    printf("%d",'\f');
    return (0);
}