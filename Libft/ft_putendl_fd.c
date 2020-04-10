#include <stdio.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (s)
        while(s[i])
        {
            write(fd, &s[i], 1);
            i++;
        }
    write(fd, "\n", 1);
}

int main(void)
{
    ft_putendl_fd("saluzzzzzzzt",1);
    ft_putendl_fd("saluzzzzzzzt",1);
    return (0);
}