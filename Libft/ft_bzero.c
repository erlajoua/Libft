#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    int *arr;

    arr = (int*)s;
    if (n == 0)
        return;
    while (n > 0)
    {
        *arr = 0;
        arr++;
        n--;
    }
}

int main( void )
  {
    int arr[6] = {1,3,6,9,12,15};
    int i = 0;
    ft_bzero(arr, 4);
    for (i = 0;i < 6;i++)
    {
      printf("%i = %i\n",i,arr[i]);
    }
  }
