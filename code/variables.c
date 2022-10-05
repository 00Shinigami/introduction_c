#include <stdio.h>

int main()
{
    /*Deklaration*/
    int anzahl;
    double preis;
    /*Zuweisung*/
    anzahl = 2;
    preis = 1.45;
    /*Ausgabe*/
    printf("Anzahl: %d \n", anzahl);
    printf("Preis: %f Euro \n", preis);
    printf("Preis: %2f Euro \n", preis);
    return 0;

}