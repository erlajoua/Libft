#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len) //big - little
{
    char *big;
    char *little;
    int i;
    int j;

    big = (char *)haystack;
    little = (char *)needle;
    i = 0;
    j = 0;
    while(big[i] && i < len) //Condition de sortie : soit big == '\0' soit len est atteint
    {
        j = 0;  //repartir à zéro à chaque test de similarité entre les deux chaînes
		while (big[i + j] == little[j] && i + j < len) //on est a big de i (selon l'avancée) + j qui s'incrémente selon la petite chaine         soit si len est atteint part l'addition de i et j
		{
			j++; 
			if (little[j] == '\0') //si on est au bout de la petite on return
				return (&big[i]);
		}
		i++; //incrémentation pour avancer dans la grande
    }
    return (0);
}

int main(void)
{
    char big[] = "018o45z789";
    char little[] = "89";
    puts("ozk");
    printf("%s",ft_strnstr(big,little,5));
    return (0);
}