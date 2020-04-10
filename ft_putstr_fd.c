#include <stdio.h>
#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (s)
        while (s[i])
        {
            write(fd, &s[i], 1);
            i++;
        }
}

int main(void)
{
    ft_putstr_fd("saluzzzzzzzt",1);
    ft_putstr_fd("saluzzzzzzzt",1);
    return (0);
}