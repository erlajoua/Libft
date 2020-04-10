#include <stdio.h>
#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main(void)
{
    ft_putchar_fd('x',1);
    return (0);
}