#include <stdio.h>
#include <string.h>

int main(void)
{

    int v1 = 1;
    double v2 = 2;
    char c = 'a';

    int *p_v1;
    double *p_v2;
    char *p_c;

    p_v1 = &v1;
    p_v2 = &v2;
    p_c = &c;

    printf("\nEndereço de v1 %p", p_v1);
    printf("\nEndereço de v2 %p", p_v2);
    printf("\nEndereço de c %p", p_c);
    printf("\n\n");

    /*
    Endereço de v1 0x7fffa6467354
    Endereço de v2 0x7fffa6467358
    Endereço de c 0x7fffa6467353
    */

    printf("\nEndereço+1 de v1 %p", p_v1+1);
    printf("\nEndereço+1 de v2 %p", p_v2+1);
    printf("\nEndereço+1 de c %p", p_c+1);
    printf("\n\n");
    /*
    Endereço+1 de v1+1 0x7fffa6467358
    Endereço+1 de v2+1 0x7fffa6467360
    Endereço+1 de c+1 0x7fffa6467354
    */

    printf("\nEndereço-1 de v1 %p", p_v1-1);
    printf("\nEndereço-1 de v2 %p", p_v2-1);
    printf("\nEndereço-1 de c %p", p_c-1);
    printf("\n\n");
    /*
    Endereço-1 de v1-1 0x7fffa6467350
    Endereço-1 de v2-1 0x7fffa6467350
    Endereço-1 de c-1 0x7fffa6467352
    */

    printf("\nEndereço+2 de v1 %p", p_v1+2);
    printf("\nEndereço+2 de v2 %p", p_v2+2);
    printf("\nEndereço+2 de c %p", p_c+2);
    printf("\n\n");
    /*
    Endereço+1 de v1+2 0x7fffa646735c
    Endereço+1 de v2+2 0x7fffa6467368
    Endereço+1 de c+2 0x7fffa6467355
    */

    printf("\nEndereço-2 de v1 %p", p_v1-2);
    printf("\nEndereço-2 de v2 %p", p_v2-2);
    printf("\nEndereço-2 de c %p", p_c-2);
    printf("\n\n");
    /*
    Endereço-1 de v1-2 0x7fffa646734c
    Endereço-1 de v2-2 0x7fffa6467348
    Endereço-1 de c-2 0x7fffa6467351
    */

    return 0;
}
