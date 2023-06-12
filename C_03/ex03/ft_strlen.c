#include <stdio.h>
#include <string.h>

/* A função acrescenta caracteres da string de origem à string de destino, até o limite especificado n ou até que o final da string de origem seja alcançado. Em seguida, ele adiciona um caractere nulo ('\0') ao final da string concatenada para garantir a finalização adequada.*/

char* ft_strncat(char* dest, const char* src, unsigned int  nb) {
    size_t dest_len = strlen(dest);
    size_t i;

    for (i = 0; i < nb && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}

int main() {
    char str1[20] = "Hello";
    char str2[10] = " World";

    ft_strncat(str1, str2, 4);
    printf("%s\n", str1);  

    return 0;
}

