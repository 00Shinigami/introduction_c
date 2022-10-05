#include <stdio.h>

int main()
{
    int anzahl;
    double preis;
    /*Erste Eingabe*/
    printf("Bitte gib eine Zahl ein: ");
    scanf("%d", &anzahl);
    /*Zweite Eingabe*/
    printf("Preis in Euro eingaben: ");
    scanf("%lf", &preis);
    /*Ausgabe*/
    printf("Anzahl: %d\n", anzahl);
    printf("Preis: %.2f Euro \n", preis);

    return 0;
}