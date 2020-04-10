#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	if (!dst && !src)
		return (NULL);
	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	i = 0;
	if (ptr_dst > ptr_src)
		while (++i <= len)
        {
            puts("test");
			ptr_dst[len - i] = ptr_src[len - i];
        }
	else
		while (len-- > 0)
			*(ptr_dst++) = *(ptr_src++);
	return (dst);
}

int main(void)
{
    char dest[]="0123456789";
    char source[]="salut";
    ft_memmove(dest,source,4);
    puts(dest);
    return (0);
}