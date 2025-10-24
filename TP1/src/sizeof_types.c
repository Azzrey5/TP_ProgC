#include <stdio.h>

int main() {
    printf("Taille des types de base en octets :\n\n");

    // Types char
    printf("signed char      : %zu octets\n", sizeof(signed char));
    printf("unsigned char    : %zu octets\n\n", sizeof(unsigned char));

    // Types short
    printf("signed short     : %zu octets\n", sizeof(signed short));
    printf("unsigned short   : %zu octets\n\n", sizeof(unsigned short));

    // Types int
    printf("signed int       : %zu octets\n", sizeof(signed int));
    printf("unsigned int     : %zu octets\n\n", sizeof(unsigned int));

    // Types long
    printf("signed long int  : %zu octets\n", sizeof(signed long int));
    printf("unsigned long int: %zu octets\n\n", sizeof(unsigned long int));

    // Types long long
    printf("signed long long int  : %zu octets\n", sizeof(signed long long int));
    printf("unsigned long long int: %zu octets\n\n", sizeof(unsigned long long int));

    // Types à virgule flottante
    printf("float            : %zu octets\n", sizeof(float));
    printf("double           : %zu octets\n", sizeof(double));
    printf("long double      : %zu octets\n", sizeof(long double));

    return 0;
}
