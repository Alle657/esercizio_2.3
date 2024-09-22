#include <stdio.h>

int main() {
    int h1, h2, m1, m2, s1, s2, differenza;


    printf("Inserisci l'ora del primo orario: ");
    scanf("%d", &h1);

    printf("Inserisci i minuti del primo orario: ");
    scanf("%d", &m1);

    printf("Inserisci i secondi del primo orario: ");
    scanf("%d", &s1);


    printf("Inserisci l'ora del secondo orario: ");
    scanf("%d", &h2);

    printf("Inserisci i minuti del secondo orario: ");
    scanf("%d", &m2);

    printf("Inserisci i secondi del secondo orario: ");
    scanf("%d", &s2);


    s1 += h1 * 3600 + m1 * 60;
    s2 += h2 * 3600 + m2 * 60;


    if (s1 >= s2)
        differenza = s1 - s2;
    else
        differenza = s2 - s1;


    printf("La differenza in secondi tra i due orari e: %d secondi\n", differenza);

    return 0;
}