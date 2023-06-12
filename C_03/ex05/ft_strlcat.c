#include <stdio.h>
#include <string.h>

/*A função strlcat recebe três parâmetros: a string de destino dst, a string de origem src e o tamanho do limite de tamanho. Ele concatena src ao final de dst, garantindo que a string resultante seja terminada em nulo e não exceda o limite de tamanho*/

size_t strlcat(char *dst, const char *src, unsigned int  size) {
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);
    size_t total_len = dst_len + src_len;

    if (size <= dst_len) { //não tem espaço pra concatenação
        return src_len + size;
    }

    size_t copy_len = size - dst_len - 1; // 1 espaço reservado para '\0'

    strncpy(dst + dst_len, src, copy_len);
    /*I - dst é a string de destino à qual src é anexada. Para posicionar corretamente o ponteiro de destino no final do conteúdo existente em dst, usamos aritmética de ponteiro. Adicionando dst_len a dst, movemos o ponteiro para o local logo após o conteúdo existente em dst. Isso garante a concatenação de src ao final do conteúdo original em dst.
     * II - O número de caracteres a serem copiados é copy_len, que representa o número máximo de caracteres que podem ser copiados com segurança da string de origem para a string de destino sem exceder o limite de tamanho.*/
    dst[dst_len + copy_len] = '\0'; //adicionando caracter nulo

    return total_len;
}

int main() {
    char destination[20] = "Hello, ";
    const char *source = "world!";
    size_t size_limit = sizeof(destination);

    printf("Antes do strlcat: %s\n", destination);

    size_t resultado = strlcat(destination, source, size_limit);

    printf("Depois do strlcat: %s\n", destination);
    printf("Tamanho concatenado: %zu\n", resultado);

    return 0;
}
