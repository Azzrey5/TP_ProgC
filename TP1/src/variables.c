#include <stdio.h>

int main() {
    // Types entiers
    signed char c = -100;
    unsigned char uc = 200;

    signed short s = -15000;
    unsigned short us = 45000;

    signed int i = -100000;
    unsigned int ui = 3000000000U;

    signed long int l = -2000000000L;
    unsigned long int ul = 4000000000UL;

    signed long long int ll = -9000000000000000000LL;
    unsigned long long int ull = 18000000000000000000ULL;

    // Types à virgule flottante
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Affichage
    printf("signed char            : %d\n", c);
    printf("unsigned char          : %u\n", uc);

    printf("signed short           : %d\n", s);
    printf("unsigned short         : %u\n", us);

    printf("signed int             : %d\n", i);
    printf("unsigned int           : %u\n", ui);

    printf("signed long int        : %ld\n", l);
    printf("unsigned long int      : %lu\n", ul);

    printf("signed long long int   : %lld\n", ll);
    printf("unsigned long long int : %llu\n", ull);

    printf("float                  : %.2f\n", f);
    printf("double                 : %.9f\n", d);
    printf("long double            : %.10Lf\n", ld);

    return 0;
}
