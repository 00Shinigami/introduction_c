
#include <stdio.h>

int main()
{
    int anzahl, nummer;
    double preis, sumRechnung;

    /*Startwert*/
    sumRechnung = 0.0;

    /*Regelmäßiges Wiederholen*/
    for(nummer = 1; nummer < 5; nummer = nummer + 1)
    {
        /*Eingabe*/
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);
        printf("Artikel %d, Preis in Euro: ", preis);
        scanf("%lf", &preis);
        /*Berechnung*/
        sumRechnung = sumRechnung + anzahl * preis;
        if(nummer >= 5)
        printf("Ende erreicht, Beende das Programm... \n");
    }
    /*Ausgabe*/
    printf("Summe der Rechnung: %2f Euro \n", sumRechnung);

    return 0;
}